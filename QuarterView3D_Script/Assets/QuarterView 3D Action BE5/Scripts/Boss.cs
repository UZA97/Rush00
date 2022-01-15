using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Boss : Enemy
{
    public GameObject missile;
    public Transform missilePortA;
    public Transform missilePortB;

    Vector3 lookVec; // 플레이어 이동 예측
    Vector3 tauntVec;
    public bool isLook;
    void Awake() 
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<MeshRenderer>();
        nav = GetComponent<NavMeshAgent>();
        nav.enabled = false;
        animator = GetComponentInChildren<Animator>();
        nav.enabled = true;
        nav.isStopped = true;
        StartCoroutine(Think());
    }


    void Update()
    {
        if(isDead) {
            StopAllCoroutines();
            return;
        }
        if(isLook) {
            float h = Input.GetAxisRaw("Horizontal");
            float v = Input.GetAxisRaw("Vertical");
            lookVec = new Vector3(h,0,v) * 5f;
            transform.LookAt(target.position + lookVec);
        }
        else
            nav.SetDestination(tauntVec);
    }
    IEnumerator Think()
    {
        yield return new WaitForSeconds(0.1f); // 길수록 난이도 쉬워짐

        int ranAction = Random.Range(0, 5);
        switch(ranAction) {
            case 0:
            case 1:
                StartCoroutine(MissileShot());
                break; // 미사일 발사 패턴
            case 2:
            case 3:
                StartCoroutine(RockShot());
                break; // 굴러가는 돌 패턴
            case 4:
                StartCoroutine(Taunt());
                break; // 점프 공격
        }
    }
    IEnumerator MissileShot() // 미사일 발사 로직
    {
        
        animator.SetTrigger("doShot");
        yield return new WaitForSeconds(0.2f);
        GameObject MissileA = Instantiate(missile, missilePortA.position, missilePortA.rotation);
        BossMissile bossMissileA = MissileA.GetComponent<BossMissile>();
        MissileA.GetComponent<NavMeshAgent>().enabled = false;
        bossMissileA.target = target;
        MissileA.GetComponent<NavMeshAgent>().enabled = true;


        yield return new WaitForSeconds(0.3f);

        GameObject MissileB = Instantiate(missile, missilePortB.position, missilePortB.rotation);
        BossMissile bossMissileB = MissileB.GetComponent<BossMissile>();
        bossMissileB.target = target;

        yield return new WaitForSeconds(2f);

        StartCoroutine(Think());
    }
    IEnumerator RockShot() // 돌 발사
    {
        isLook = false;
        animator.SetTrigger("doBigShot");
        Instantiate(bullet, transform.position, transform.rotation);
        yield return new WaitForSeconds(3f);

        isLook = true;
        StartCoroutine(Think());
    }
    IEnumerator Taunt() // 점프 공격
    {
        tauntVec = target.position + lookVec;

        isLook = false;
        nav.isStopped = false;
        boxCollider.enabled = false;
        animator.SetTrigger("doTaunt");

        yield return new WaitForSeconds(1.5f);
        meleeArea.enabled = true;

        yield return new WaitForSeconds(0.5f);
        meleeArea.enabled = false;

        yield return new WaitForSeconds(1f);
        isLook = true;
        nav.isStopped = true;
        boxCollider.enabled = true;
        StartCoroutine(Think());
    }
}
