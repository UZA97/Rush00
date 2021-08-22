using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class PlayerMove : MonoBehaviour
{
    public GM gameManager;
    public float jumpPower;
    public float maxSpeed;
    Rigidbody2D rigid;
    SpriteRenderer spriteRenderer;
    Animator animator;
    CapsuleCollider2D collide;
    public AudioClip audioJump;
    public AudioClip audioAttack;
    public AudioClip audioDamaged;
    public AudioClip audioItemp;
    public AudioClip audioFinish;
    public AudioClip audioDie;
    public AudioClip audioDrop;
    AudioSource audioSource;
    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
        collide = GetComponent<CapsuleCollider2D>();
        audioSource = GetComponent<AudioSource>();
    }
    void Update() // Stop Speed
    {
        //Jump
        if(Input.GetButtonDown("Jump")  && !animator.GetBool("isJumping"))
        {
            rigid.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);
            animator.SetBool("isJumping", true);
            PlaySound("JUMP");
        }
       if(Input.GetButtonUp("Horizontal")) // normalized : 벡터크기를 1로 만든 상태( = 딱딱 끊김)
        {
            rigid.velocity = new Vector2(rigid.velocity.normalized.x * 0.5f, rigid.velocity.y);
        } 

        // Direction Sprite(좌우반전)3
        if (Input.GetButton("Horizontal"))
        {
            spriteRenderer.flipX = Input.GetAxisRaw("Horizontal") == -1;
        }

        // Animation
        if (Mathf.Abs(rigid.velocity.x) < 0.5)
            animator.SetBool("isWalking", false);
        else
            animator.SetBool("isWalking", true);
    }
    void FixedUpdate()
    {
        // Move Speed
        float h = Input.GetAxisRaw("Horizontal");

        rigid.AddForce(Vector2.right * h, ForceMode2D.Impulse); // AddForce : 바니훕
        
        // Max Speed
        if (rigid.velocity/*현재속도*/.x > maxSpeed)
        {
            rigid.velocity = new Vector2(maxSpeed, rigid.velocity.y);
        }
        else if (rigid.velocity/*현재속도*/.x < maxSpeed * (-1))
        {
            rigid.velocity = new Vector2(maxSpeed * (-1), rigid.velocity.y);
        }

        //Landing Platform / RayCast : 오브젝트 검색을 위해 Ray를 쏘는 방식
        if (rigid.velocity.y < 0)
        {
            Debug.DrawRay(rigid.position, Vector3.down, new Color(0, 1, 0));
        
            RaycastHit2D raycastHit = Physics2D.Raycast(rigid.position, Vector3.down, 1, LayerMask.GetMask("Platforms")); // Ray에 닿은 오브젝트
            if (raycastHit.collider != null)
            {
                if(raycastHit.distance < 1f)
                    animator.SetBool("isJumping", false);
            }
        }
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Enemy")
        {
            //Attack
            if(rigid.velocity.y < 0 && transform.position.y > collision.transform.position.y)
            // 몬스터보다 위에있고 아래로 낙하중 = 밟음
                OnAttack(collision.transform);
            //Damaged
            else
                OnDamaged(collision.transform.position);
        }
        else if(collision.gameObject.tag == "Spike")
            OnDamaged(collision.transform.position);
    }
    void OnTriggerEnter2D(Collider2D collision)
    {
        // Point
        if (collision.gameObject.tag == "Item")
        {
            bool isBronze = collision.gameObject.name.Contains("Bronze");
            bool isSilver = collision.gameObject.name.Contains("Silver");
            bool isGold = collision.gameObject.name.Contains("Gold");

            if(isBronze)
                gameManager.stagePoint += 50;
            else if(isSilver)
                gameManager.stagePoint += 100;
            else if(isGold)
                gameManager.stagePoint += 200;
            PlaySound("ITEM");
            //Deactive Item
            collision.gameObject.SetActive(false);
        }
        else if(collision.gameObject.tag == "Finish")
        {
            //NextStage
            gameManager.NextStage();
            PlaySound("FINISH");
        }
        else if(collision.gameObject.tag == "Respawn")
            PlaySound("DROP");
    }
    public void OnDamaged(Vector2 targetPos)
    {
        PlaySound("DAMAGED");
        // HealthDown
        gameManager.HealthDown();

        //Change Layer
        gameObject.layer = 8;

        //View Alpha
        spriteRenderer.color = new Color(1,1,1,0.4f);

        //Reaction Force
        int dirc = transform.position.x - targetPos.x > 0 ? 1 : -1;
        rigid.AddForce(new Vector2(dirc, 1) * 3, ForceMode2D.Impulse);

        //Animation
        animator.SetTrigger("Damaged");

        Invoke("OffDamaged", 1.5f);
    }
    void OffDamaged()
    {
        gameObject.layer = 7;
        spriteRenderer.color = new Color(1, 1, 1, 1);
    }
    void OnAttack(Transform enemy)
    {
        PlaySound("ATTACK");
        // Point
        gameManager.stagePoint += 100;
        // Reaction Force
        rigid.AddForce(Vector2.up * 5, ForceMode2D.Impulse);

        // Enemy Die
        EnemyMove enemyMove = enemy.GetComponent<EnemyMove>();
        enemyMove.OnDamaged();
    }
    public void OnDie()
    {
        PlaySound("DIE");
        //Sprite Alpha
        spriteRenderer.color = new Color(1, 1, 1, 0.4f);

        //Sprite Flip.Y
        spriteRenderer.flipY = true;

        //Die Effect Jump
        rigid.AddForce(Vector2.up * 4, ForceMode2D.Impulse);
        
        //Collider Disable
        collide.enabled = false;
    }
    
    public void VelocityZero()
    {
        rigid.velocity = Vector2.zero;
    }
    void PlaySound(string action)
    {
        switch (action)
        {
            case "JUMP":
                audioSource.clip = audioJump;
                audioSource.Play();
                break;
            case "ATTACK":
                audioSource.clip = audioAttack;
                audioSource.Play();
                break;
            case "DAMAGED":
                audioSource.clip = audioDamaged;
                audioSource.Play();
                break;
            case "ITEM":
                audioSource.clip = audioItemp;
                audioSource.Play();
                break;
            case "DIE":
                audioSource.clip = audioDie;
                audioSource.Play();
                break;
            case "FINISH":
                audioSource.clip = audioFinish;
                audioSource.Play();
                break;
            case "DROP":
                audioSource.clip = audioDrop;
                audioSource.Play();
                break;

        }
    }

}
