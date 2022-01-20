using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class Ball : MonoBehaviour
{
    [Header("BallScriptValue")]
    public GameObject GreenBall;
    public Rigidbody2D RB;
    public bool isMoving;
    
    void Start() { Start_BALL(); }

    void OnCollisionEnter2D(Collision2D col) { StartCoroutine(OnCollisionEnter2D_BALL(col)); }

    void OnTriggerEnter2D(Collider2D col) { StartCoroutine(OnTriggerEnter2D_BALL(col)); }

    GameManager GM;



    void Start_BALL() => GM = GameObject.FindWithTag("GameManager").GetComponent<GameManager>();

    public void Launch(Vector3 pos)
    {
        GM.shotTrigger = true;
        isMoving = true;
        RB.AddForce(pos * 7000);
    }



    IEnumerator OnCollisionEnter2D_BALL(Collision2D col)
    {
        GameObject Col = col.gameObject;
        Physics2D.IgnoreLayerCollision(2, 2);


        // 가로로 움직일경우 아래로 내림
        Vector2 pos = RB.velocity.normalized;
        if (pos.magnitude != 0 && pos.y < 0.15f && pos.y > -0.15f)
        {
            RB.velocity = Vector2.zero;
            RB.AddForce(new Vector2(pos.x > 0 ? 1 : -1, -0.2f).normalized * 7000);
        }


        // 바닥충돌시 최초좌표로 이동
        if (Col.CompareTag("Ground"))
        {
            RB.velocity = Vector2.zero;
            transform.position = new Vector2(col.contacts[0].point.x, GM.groundY);
            GM.VeryFirstPosSet(transform.position);

            while (true)
            {
                yield return null;
                transform.position = Vector3.MoveTowards(transform.position, GM.veryFirstPos, 4);
                if (transform.position == GM.veryFirstPos) { isMoving = false; yield break; }
            }
        }


        // 블럭충돌시 블럭숫자 1씩 줄이다 0이되면 부숨
        if (Col.CompareTag("Block"))
        {
            Text BlockText = col.transform.GetChild(0).GetComponentInChildren<Text>();
            int blockValue = int.Parse(BlockText.text) - 1;
            GM.BlockColorChange();

            for (int i = 0; i < GM.S_Block.Length; i++)
            {
                if (GM.S_Block[i].isPlaying) continue;
                else { GM.S_Block[i].Play(); break; }
            }


            if (blockValue > 0)
            {
                BlockText.text = blockValue.ToString();
                Col.GetComponent<Animator>().SetTrigger("shock");
            }
            else
            {
                Destroy(Col);
                Destroy(Instantiate(GM.P_ParticleRed, col.transform.position, Quaternion.identity), 1);
            }
        }
    }



    IEnumerator OnTriggerEnter2D_BALL(Collider2D col)
    {
        // 초록구 충돌시 초록공 생성해서 아래로 떨어짐
        if (col.gameObject.CompareTag("GreenOrb"))
        {
            Destroy(col.gameObject);
            Destroy(Instantiate(GM.P_ParticleGreen, col.transform.position, GM.QI), 1);

            GM.S_GreenOrb.Play();
            Transform TR = Instantiate(GreenBall, col.transform.position, GM.QI).transform;
            TR.SetParent(GameObject.Find("GreenBallGroup").transform);
            Vector3 targetPos = new Vector3(TR.position.x, GM.groundY, 0);
            while (true)
            {
                yield return null;
                TR.position = Vector3.MoveTowards(TR.position, targetPos, 2.5f);
                if (TR.position == targetPos) yield break;
            }
        }
    }

}

