using System.Collections;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent (typeof(NavMeshAgent))]
public class Enemy : LivingEntity
{
    public enum State{IDLE,CHASING,ATTACKING};
    State currentState;
    NavMeshAgent pathfinder;
    Transform target;
    LivingEntity targetEntity;
    Material skinMaterial;
    Color originalColor;

    float attackDistanceThreshold = 0.5f;   // Enemy Attack Range
    float timeBetweenAttacks = 1.0f;   // Enemy 공격속도
    float damage = 1.0f;
    float nextAttackTime;
    float myCollisionRadius;
    float targetCollisionRadius;

    bool hasTarget;
    protected override void Start()
    {
        base.Start();
        pathfinder = GetComponent<NavMeshAgent>();
        skinMaterial = GetComponent<Renderer>().material;
        originalColor = skinMaterial.color;

        if(GameObject.FindGameObjectWithTag("Player") != null) {
            currentState = State.CHASING;
            hasTarget = true;
            target = GameObject.FindGameObjectWithTag("Player").transform;
            targetEntity = target.GetComponent<LivingEntity>();
            targetEntity.OnDeath += OnTargetDeath;
            myCollisionRadius = GetComponent<CapsuleCollider>().radius;
            targetCollisionRadius = GetComponent<CapsuleCollider>().radius;

            StartCoroutine(UpdatePath());
        }
    }
    void OnTargetDeath()
    {
        hasTarget = false;
        currentState = State.IDLE;
    }
    void Update()
    {
        if(hasTarget){
            if(Time.time > nextAttackTime) {
                float sqrDstToTargt = (target.position - transform.position).sqrMagnitude;  // sqrMagnitude : 제곱값 계산
                if(sqrDstToTargt < Mathf.Pow(attackDistanceThreshold + myCollisionRadius + targetCollisionRadius,2)) { // pow : 제곱
                    nextAttackTime = Time.time + timeBetweenAttacks;
                    StartCoroutine(Attack());
                }   
            }
        }
    }
    IEnumerator Attack()
    {
        currentState = State.ATTACKING;
        pathfinder.enabled = false;
        Vector3 originalPosition = transform.position;
        Vector3 dirToTarget = (target.position - transform.position).normalized;
        Vector3 attackPosition = target.position - dirToTarget *(myCollisionRadius);

        float attackSpeed = 3.0f;
        float percent = 0.0f;  // 공격범위
        skinMaterial.color = Color.magenta;
        bool hasAppliedDamage = false;
        while(percent <= 1) {
            if(percent >=0.5f&& !hasAppliedDamage){
                hasAppliedDamage = true;
                targetEntity.TakeDamage(damage);
            }
            percent += Time.deltaTime * attackSpeed;
            float interpolation = (-Mathf.Pow(percent, 2) + percent)*4;
            transform.position = Vector3.Lerp(originalPosition, attackPosition, interpolation);
            yield return null;
        }
        skinMaterial.color = originalColor;
        currentState = State.CHASING;
        pathfinder.enabled = true;
    }


    // 1초에 60번 검색하는 것보다 5번만 검색하여 성능을 올린다.
    IEnumerator UpdatePath()
    {
        float refreshRate = 0.2f;
        while(hasTarget) {
            if(currentState == State.CHASING) {
                Vector3 dirToTarget = (target.position - transform.position).normalized;
                Vector3 targetPosition = target.position - dirToTarget *(myCollisionRadius +targetCollisionRadius+ attackDistanceThreshold * 0.5f);
                if(!dead) {                                    // Object가 파괴된 이후에도 코루틴을 돌리면서 도착지점을 계산하려 하면서 에러반환 하는것을 방지 
                    pathfinder.SetDestination(targetPosition); // 매 초마다 새롭게 경로를 계산
                }
            }
            yield return new WaitForSeconds(refreshRate);
        }
    }
}
