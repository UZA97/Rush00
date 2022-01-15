using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dongle : MonoBehaviour
{
    public GameManager manager;
    public ParticleSystem effect;
    public int level;
    public bool isClick = false;
    public bool isMerge;
    public bool isAttach;
    public Rigidbody2D rigid;
    CircleCollider2D circle;
    Animator anim;
    SpriteRenderer spriteRenderer;

    float fDeadTime;
    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        circle = GetComponent<CircleCollider2D>();
        anim = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void OnEnable() // 스크립트가 활성화 될 때 실행되는 이벤트 함수
    {
        anim.SetInteger("Level",level); // Animator int형 파라메터를 설정하는 함수
        
    }

    void OnDisable()
    {
        level = 0;
        isClick = false;
        isMerge = false;
        isAttach = false;
        
        // Reset Dongle Transform
        transform.localPosition = Vector3.zero;
        transform.localRotation = Quaternion.identity; // 각종 변수, 트랜스폼,물리 초기화
        transform.localScale = Vector3.zero;

        // Reset Dongle physics 
        rigid.simulated = false;
        rigid.velocity = Vector2.zero;
        rigid.angularDrag = 0;
        circle.enabled = true;
    }
    void Update()
    {
        if(isClick)
        {
            Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            float leftBorder = -4.9f + transform.localScale.x/2;
            float rightBorder = 4.9f - transform.localScale.x/2;

            if(mousePos.x < leftBorder)
                mousePos.x = leftBorder;
            else if(mousePos.x > rightBorder)
                mousePos.x = rightBorder;

            mousePos.y = 8;
            mousePos.z = 0;
            transform.position = Vector3.Lerp(transform.position,mousePos,0.25f);
        }
    }
    public void Drag()
    {
        isClick = true;
    }
    public void Drop()
    {
        isClick = false;
        rigid.simulated = true;
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        StartCoroutine(AttachRoutine());
    }

    IEnumerator AttachRoutine()
    {
        if(isAttach) {
            yield break; // escape Corutine
        }

        isAttach = true;
        manager.SfxPlay(GameManager.Sfx.Attach);

        yield return new WaitForSeconds(0.2f);

        isAttach = false;
    }
    void OnCollisionStay2D(Collision2D collision)
    {
        if(collision.gameObject.tag =="Dongle") {
            Dongle other = collision.gameObject.GetComponent<Dongle>();

            if(level == other.level && !isMerge && !other.isMerge && level < 7) {
                // Add Up Dongle & this and other's Position
                float meX = transform.position.x;
                float meY = transform.position.y;
                float otherX = other.transform.position.x;
                float otherY = other.transform.position.y;

                // 1. 내가 아래에 있을 때
                // 2. 동일한 높이, 내가 오른쪽에 있을 때

                if(meY < otherY || (meY == otherY && meX > otherX )) {
                    // 상대방 숨기기, 나는 Level Up
                    other.Hide(transform.position);
                    LevelUp();
                }
            }
        }
    }

    public void Hide(Vector3 targetPos)
    {
        isMerge = true;

        rigid.simulated = false;
        circle.enabled = false;
        if(targetPos == Vector3.up *100) {
            EffectPlay();
        }
        StartCoroutine(HideRoutine(targetPos));
    }
    IEnumerator HideRoutine(Vector3 targetPos)
    {
        int framCount = 0;
        while(framCount < 20) {
            framCount++;
            if(targetPos != Vector3.up *100) {
                transform.position = Vector3.Lerp(transform.position, targetPos, 0.5f);
            }
            else if (targetPos == Vector3.up * 100) {
                transform.localScale = Vector3.Lerp(transform.localScale,Vector3.zero,0.25f);
            }
            yield return null;
        }
        manager.nScore += (int)Mathf.Pow(10,level);
        isMerge = false;
        gameObject.SetActive(false);
    }

    void LevelUp()
    {
        isMerge = true;
        // 속도는 0
        rigid.velocity = Vector2.zero;
        rigid.angularVelocity = 0;

        StartCoroutine(LevelUpRoutine());
    }
    IEnumerator LevelUpRoutine()
    {
        yield return new WaitForSeconds(0.2f);

        anim.SetInteger("Level", level+1);  // 레벨 상승을 늦게하는이유는 애니메이션 시간때문!
        EffectPlay();
        manager.SfxPlay(GameManager.Sfx.LevelUp);
        yield return new WaitForSeconds(0.2f);
        level++;
        manager.maxLevel = Mathf.Max(level, manager.maxLevel);
        isMerge = false;
    }

    // 동글이가 선에 닿았을때
    void OnTriggerStay2D(Collider2D collision)
    {
        if(collision.tag == "Finish")
        {
            fDeadTime += Time.deltaTime;
            if(fDeadTime > 2) {
                spriteRenderer.color = new Color(0.9f,0.2f,0.2f);
            }
            if(fDeadTime > 5) {
               manager.GameOver();
            }
        }
    }

    //
    void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.tag == "Finish")
        {
            fDeadTime = 0;
            spriteRenderer.color = Color.white;
        }
    }
    void EffectPlay()
    {
        effect.transform.position = transform.position;
        effect.transform.localScale = transform.localScale;
        effect.Play();
    }
}
