using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    Animator animator;
    SpriteRenderer spriteRenderer;
    Rigidbody2D rigid;
    CapsuleCollider2D collide;
    public int nextMove; // Ai 설정
    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        collide = GetComponent<CapsuleCollider2D>();

        Invoke("Think", 4); // delay 시켜줌
    }

    void FixedUpdate()
    {
        // Move
        rigid.velocity = new Vector2(nextMove, rigid.velocity.y);
        
        // Platform Check
        Vector2 frotVec = new Vector2(rigid.position.x + nextMove * 0.4f, rigid.position.y);
        Debug.DrawRay(frotVec, Vector3.down, new Color(0, 1, 0));        
        RaycastHit2D raycastHit = Physics2D.Raycast(frotVec, Vector3.down, 1, LayerMask.GetMask("Platforms")); // Ray에 닿은 오브젝트
        if (raycastHit.collider == null)
            {
                Turn();
            }
    }

    void Think()
    {
        // Set Next Active
        nextMove = Random.Range(-1, 2);

        //Sprite Animation
        animator.SetInteger("WalkSpeed", nextMove);

        // Flip Sprite
        if(nextMove != 0)
            spriteRenderer.flipX = nextMove == 1;
            
        // 재귀함수
        float nextThinkTime = Random.Range(2f, 4f);
        Invoke("Think", nextThinkTime);
    }

    void Turn()
    {
        nextMove *= -1;
        spriteRenderer.flipX = nextMove == 1;

        CancelInvoke();
        Invoke("Think", 3);
    }

    public void OnDamaged()
    {
        //Sprite Alpha
        spriteRenderer.color = new Color(1, 1, 1, 0.4f);

        //Sprite Flip.Y
        spriteRenderer.flipY = true;

        //Collider Disable
        collide.enabled = false;

        //Die Effect Jump
        rigid.AddForce(Vector2.up * 4, ForceMode2D.Impulse);

        //Destroy
        Invoke("DeActive", 5);
    }
    void DeActive()
    {
        gameObject.SetActive(false);
    }
}
