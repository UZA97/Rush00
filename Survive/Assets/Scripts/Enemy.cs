using System.Collections;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent (typeof(NavMeshAgent))]
public class Enemy : LivingEntity
{
    NavMeshAgent pathfinder;
    Transform target;
    protected override void Start()
    {
        base.Start();
        pathfinder = GetComponent<NavMeshAgent>();
        target = GameObject.FindGameObjectWithTag("Player").transform;
        StartCoroutine(UpdatePath());
    }

    // 1초에 60번 검색하는 것보다 5번만 검색하여 성능을 올린다.
    IEnumerator UpdatePath()
    {
        float refreshRate = 0.2f;
        while(target != null) {
            Vector3 targetPosition = new Vector3(target.position.x, 0,target.position.z);
            if(!dead) {                                    // Object가 파괴된 이후에도 코루틴을 돌리면서 도착지점을 계산하려 하면서 에러반환 하는것을 방지 
                pathfinder.SetDestination(targetPosition); // 매 초마다 새롭게 경로를 계산
            }
            yield return new WaitForSeconds(refreshRate);
        }
    }
}
