using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class GameManager : MonoBehaviour
{
    public GameObject donglePrefabs;
    public Transform dongleGroup;
    public List<Dongle> donglePool;

    public GameObject effectPrefabs;
    public Transform effectGroup;
    public List<ParticleSystem> effectPool;

    [Range(1,30)]
    public int poolSize;
    public int poolCursor;
    public Dongle lastDongle;

    
    [Header("-----[Audio]")]
    public AudioSource bgmPlayer;
    public AudioSource[] sfxPlayer;
    public AudioClip[] sfxClip;
    public enum Sfx { LevelUp, Next, Attach, Button, Over };
    int sfxCursor;  // 다음번 재생할 AudioSource를 가리키는 변수

    [Header("-----[UI]")]
    public GameObject line;
    public GameObject floor;
    public GameObject startGroup;
    public GameObject overGroup;
    public Text scoreText;
    public Text maxScoreText;
    public Text subScoreText;
    public GameObject help;

    

    public int nScore;
    public int maxLevel;
    public bool isOver;


    void Awake()
    {
        Application.targetFrameRate = 60;

        donglePool = new List<Dongle>();
        effectPool = new List<ParticleSystem>();
        for(int i = 0 ; i < poolSize; i++) {
            MakeDongle();
        }
        // MaxScore
        if(!PlayerPrefs.HasKey("MaxScore")) {
            PlayerPrefs.SetInt("MaxScore",0);
        }
        maxScoreText.text = PlayerPrefs.GetInt("MaxScore").ToString();
    }
    public void GameStart()
    {
        // Close Start Menu 
        startGroup.SetActive(true);
        line.SetActive(true);
        floor.SetActive(true);
        scoreText.gameObject.SetActive(true);
        maxScoreText.gameObject.SetActive(true);     
        startGroup.SetActive(false); 
        
        // Start BGM
        bgmPlayer.Play();

        // Start Game
        Invoke("NextDongle", 0.5f);    
    }

    public void GetHelp()
    {
        help.SetActive(true);
    }

    public void Exit()
    {
        help.SetActive(false);
    }

    // Object Pooling
    Dongle MakeDongle()
    {
        // Create effect
        GameObject instantEffectObj = Instantiate(effectPrefabs,effectGroup);
        instantEffectObj.name = "Effect " + effectPool.Count;
        ParticleSystem instanteffect = instantEffectObj.GetComponent<ParticleSystem>();
        effectPool.Add(instanteffect);

        // Creat Dongle
        GameObject instantDongleObj = Instantiate(donglePrefabs,dongleGroup);
        instantDongleObj.name = "Dongle " + donglePool.Count;
        Dongle instantDongle = instantDongleObj.GetComponent<Dongle>();
        instantDongle.manager = this;
        instantDongle.effect = instanteffect;
        donglePool.Add(instantDongle);

        return instantDongle;
    }

    // 동글 생성
    Dongle GetDongle()
    {
        for(int i = 0; i<donglePool.Count; i++) {
            poolCursor = (poolCursor +1)%donglePool.Count;
            if(!donglePool[poolCursor].gameObject.activeSelf) {
                return donglePool[poolCursor];
            }
        }
        return MakeDongle();
    }
    void NextDongle()   // 동글 하나 떨어뜨리고 다시 생성
    {
        if(isOver) {
            return;
        }
        lastDongle = GetDongle();
        lastDongle.level = Random.Range(0, maxLevel);
        lastDongle.gameObject.SetActive(true);

        SfxPlay(Sfx.Next);
        StartCoroutine(WaitNext());
    }

    IEnumerator WaitNext()
    {
        while(lastDongle != null){
            yield return null;
        }
        yield return new WaitForSeconds(2.2f);       // Corutine에 yield는 꼭 필요
        NextDongle();
    }

    public void TouchDown()
    {
        if(lastDongle == null)
            return; 
        lastDongle.Drag();
    }

    public void TouchUp()
    {
        if(lastDongle == null)
            return;
        lastDongle.Drop();
        lastDongle = null;
    }

    public void GameOver()
    {   
        if(isOver) 
            return;
        isOver =true;
        bgmPlayer.Stop();
        StartCoroutine(GameOverRoutine());
    }

    IEnumerator GameOverRoutine()
    {
        // 1. 장면 안에 활성화 되어있는 모든 동글 가져오기
        Dongle[] dongles = GameObject.FindObjectsOfType<Dongle>();

        // 2. 지우기 전에 모든 동글의 물리효과 비활성화
        for(int i = 0; i < dongles.Length; i++) {
            dongles[i].rigid.simulated = false;    
            yield return null;
        }

        // 3. 1번의 목록을 하나씩 접근해서 지우기
        for(int i = 0; i < dongles.Length; i++) {
            dongles[i].Hide(Vector3.up * 100);
            yield return new WaitForSeconds(0.1f);
        }
        yield return new WaitForSeconds(1f);

        // 점수 적용
        subScoreText.text = "Score : " + scoreText.text;

        // 최대 점수 갱신
        int maxScore = Mathf.Max(PlayerPrefs.GetInt("MaxScore"),nScore);
        PlayerPrefs.SetInt("MaxScore",maxScore);
  

        // UI
        overGroup.SetActive(true);

        // 효과음 출력
        SfxPlay(Sfx.Over);
    }
    public void Reset()
    {   
        // 효과음 출력
        SfxPlay(Sfx.Button);
        StartCoroutine(ResetRoutine());        
    }

    IEnumerator ResetRoutine() {
        yield return new WaitForSeconds(0.5f);
        // LoadScene
        SceneManager.LoadScene(0);
    }

    public void SfxPlay(Sfx type) {
        switch(type) {
            case Sfx.LevelUp:
            sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(0,3)]; // 
                break;
            case Sfx.Next:
            sfxPlayer[sfxCursor].clip = sfxClip[3];
                break;
            case Sfx.Attach:
            sfxPlayer[sfxCursor].clip = sfxClip[4];
                break;
            case Sfx.Button:
            sfxPlayer[sfxCursor].clip = sfxClip[5];
                break;
            case Sfx.Over:
            sfxPlayer[sfxCursor].clip = sfxClip[6];
                break;
        }
        sfxPlayer[sfxCursor].Play();
        sfxCursor = (sfxCursor+1) % sfxPlayer.Length;
    } 

    void LateUpdate()   // 점수표시
    {
        scoreText.text = nScore.ToString();
    } 
}
