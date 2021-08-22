using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI; // Na v 관련 클래스 사용

public class Enemy : MonoBehaviour
{
    public enum Type {A, B, C, D};
    public Type enemyType;
    public int maxHealth;
    public int curHealth;
    public int score;

    public GameManager manager;
    public Transform target;
    public BoxCollider meleeArea;
    public GameObject bullet;
    public GameObject[] coins;

    public bool isChase;
    public bool isAttack;
    public bool isDead;

    public Rigidbody rigid;
    public BoxCollider boxCollider;
    public MeshRenderer[] meshs;
    public NavMeshAgent nav; // nav mesh 생성 필요
    public Animator animator;

    void Awake() {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<MeshRenderer>(); // Material은 Mesh Renderer에서 접근가능
        nav = GetComponent<NavMeshAgent>();
        nav.enabled = false;
        nav.enabled = true;
        animator = GetComponentInChildren<Animator>();
        
        if(enemyType != Type.D)
            Invoke("ChaseStart", 2f);
    }

    void ChaseStart()
    {
        isChase = true;
        animator.SetBool("isWalk", true);
    }

    void Update() { // monster Ai 구현
        if(nav.enabled && enemyType != Type.D) {
            nav.SetDestination(target.position); // 도착할 목표 위치 지정함수
            nav.isStopped = !isChase;
        }
    }
    
    void FreezeV() // 물리엔진 보완
    {
        if(isChase) {
            rigid.velocity = Vector3.zero;
            rigid.angularVelocity = Vector3.zero;
        }
    }
    void Targeting() // enemy Attack
    {
        if(enemyType != Type.D && !isDead) {
            float targetRadius = 0;
            float targetRange = 0;

            switch(enemyType) {
                case Type.A:
                    targetRadius = 1.5f;
                    targetRange = 3f;
                    break;
                case Type.B:
                    targetRadius = 1f;
                    targetRange = 10f; // 공격 범위
                    break;
                case Type.C:
                    targetRadius = 0.5f;
                    targetRange = 30f;
                    break;
            }
            RaycastHit[] rayHits = Physics.SphereCastAll(transform.position, targetRadius, transform.forward, targetRange, LayerMask.GetMask("Player"));
            if(rayHits.Length > 0 && !isAttack) {
                StartCoroutine(Attack());
            }
        }
    }

    IEnumerator Attack() // enemy Attack
    {
        isChase = false;
        isAttack = true;
        animator.SetBool("isAttack", true);

        switch (enemyType) {
            case Type.A:
                yield return new WaitForSeconds(0.2f);
                meleeArea.enabled = true;
                
                yield return new WaitForSeconds(1f); // 공격속도
                meleeArea.enabled = false;
                
                yield return new WaitForSeconds(0.5f);
                break;
            case Type.B:
                yield return new WaitForSeconds(1f);
                rigid.AddForce(transform.forward * 15, ForceMode.Impulse); // 다가가는 속도
                meleeArea.enabled = true;

                yield return new WaitForSeconds(0.5f);
                rigid.velocity = Vector3.zero;
                meleeArea.enabled = false;

                yield return new WaitForSeconds(1f);
                break;
            case Type.C: // 미사일 발사 로직
                yield return new WaitForSeconds(0.5f);
                GameObject instantBullet = Instantiate(bullet, transform.position, transform.rotation);
                Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
                rigidBullet.velocity = transform.forward * 20; 
                
                yield return new WaitForSeconds(1.5f);
                break;
        }
        isChase = true;
        isAttack = false;
        animator.SetBool("isAttack", false);
    }
    void FixedUpdate() // 물리엔진 보완
    {
        Targeting();
        FreezeV();
    }
    void OnTriggerEnter(Collider other) { // enemy 피격
        if(other.tag == "Melee") {
            Weapon weapon = other.GetComponent<Weapon>();
            curHealth -= weapon.damage;
            // 죽었을 때 넉백
            Vector3 reactVec = transform.position - other.transform.position;

            StartCoroutine(onDamage(reactVec, false));
        }
        else if (other.tag == "Bullet") {
            Bullet bullet = other.GetComponent<Bullet>();
            curHealth -= bullet.damage;
            // 죽었을 때 넉백
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(onDamage(reactVec, false));
        }
    }
    public void HitByGrenade(Vector3 explosionPos) // 수류탄 피격
    {
        curHealth -= 150; // 수류탄 Damage
        Vector3 reactVec = transform.position - explosionPos;
        StartCoroutine(onDamage(reactVec, true));
    }
    IEnumerator onDamage(Vector3 reactVec, bool isGrenade)
    {
        foreach(MeshRenderer mesh in meshs)
            mesh.material.color = Color.red;

        yield return new WaitForSeconds(0.1f);

        if(curHealth > 0) { // 피격했을 때
            foreach(MeshRenderer mesh in meshs)
                mesh.material.color = Color.white;
        }
        else { // 죽었을 때
            gameObject.layer = 14;
            isDead = true;
            isChase = false;
            nav.enabled = false;
            animator.SetTrigger("doDie");

            Player player = target.GetComponent<Player>();
            player.score += score;
            int ranCoin = Random.Range(0, 3);
            Instantiate(coins[ranCoin], transform.position, Quaternion.identity);
            
            foreach(MeshRenderer mesh in meshs)
                mesh.material.color = Color.gray;

            switch(enemyType) {
                case Type.A:
                    manager.enemyCntA--;
                    break;
                case Type.B:
                    manager.enemyCntB--;
                    break;
                case Type.C:
                    manager.enemyCntC--;
                    break;
                case Type.D:
                    manager.enemyCntD--;
                    break;
            }

            if(isGrenade) { // 수류탄에 피격되었을 떄 모션
                reactVec = reactVec.normalized;
                reactVec += Vector3.up * 3;

                rigid.freezeRotation = false;
                rigid.AddForce(reactVec * 5, ForceMode.Impulse);
                rigid.AddTorque(reactVec * 15, ForceMode.Impulse);

            }
            else { // 죽었을 때 모션
                reactVec = reactVec.normalized;
                reactVec += Vector3.up;
                rigid.AddForce(reactVec * 5, ForceMode.Impulse);
            }
                Destroy(gameObject, 2.5f);
        }
    }
}
