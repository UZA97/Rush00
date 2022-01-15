using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playerball : MonoBehaviour
{
    public int itemCount; // 아이템 먹었을때 개수 세기
    public float jumppower; // 점프 세기
    public Count manager; // manager에 tpsms

    bool isjump; // 점프의 참 거짓 판단
    int jumpCnt = 2;
    AudioSource audios; // 소리
    Rigidbody rigid; // rigid 선언
    void Awake() // 게임을 시작하기 전 변수 초기화 처음 1번 실행되는 함수 (Awake -> Start)
    {
        rigid = GetComponent<Rigidbody>(); // 
        audios = GetComponent<AudioSource>();
        isjump = false;
    }

    void Update()
    {
        if(Input.GetButtonDown("Jump") && !isjump) // Jump키 눌렀을 때
        {
            isjump = true;
            rigid.AddForce(new Vector3(0, jumppower, 0), ForceMode.Impulse);
            // Vector3(x,y,z) ForceMode.Impulse = 짧은 순간의 힘을 가하는 경우 사용
        }
    }
    void FixedUpdate()
        // 물리효과가 적용된(rigiedbody)오브젝트를 조정할 때 사용
    {
        float h = Input.GetAxisRaw("Horizontal"); // 수평방향
        float v = Input.GetAxisRaw("Vertical"); // 수직방향

        rigid.AddForce(new Vector3(h, 0, v),ForceMode.Impulse);
    }
    void OnCollisionEnter(Collision collision) // collision에 들어갔을 때
    {
        if(collision.gameObject.tag == "floor") // 바닥에 닿았을 때
        {
            isjump = false; // 무한점프 방지
        }
    }
    void OnTriggerEnter(Collider other) //트리거에 들어갔을 때
    {
        if(other.tag == "item")
        {
            itemCount++;
            audios.Play();
            other.gameObject.SetActive(false); // 아이템 사라지게 하기
            manager.GetItem(itemCount); // manager에 아이템 개수 세기
        }
        else if(other.tag == "finish") // 피니쉬 라인에 들어갔을 때
        {
            if(itemCount == manager.totalItemCount) // 아이템 갯수 = 총갯수
            {
                if (manager.stage == 2)
                {
                    SceneManager.LoadScene(0); /*장면불러오기*/
                }
                else
                    SceneManager.LoadScene(manager.stage + 1); // 다음장면으로 전환
            }
            else
            {
                SceneManager.LoadScene(manager.stage);
                // 다 안먹었으면 다시
            }
        }
    }
}