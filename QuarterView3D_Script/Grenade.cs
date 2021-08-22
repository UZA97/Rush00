using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grenade : MonoBehaviour
{
    public GameObject meshObj; //수류탄의 mesh, particle system 활/비활 
    public GameObject effectObj;
    public Rigidbody rigid;

    void Start() {
        StartCoroutine(Explosion());
    }

    IEnumerator Explosion() // 수류탄 폭파 구현
    {
        yield return new WaitForSeconds(1f);
        rigid.velocity = Vector3.zero;
        rigid.angularVelocity = Vector3.zero;
        meshObj.SetActive(false);
        effectObj.SetActive(true); // particle system 활성

        RaycastHit[] rayHits = Physics.SphereCastAll(transform.position, 15, Vector3.up, 0f, LayerMask.GetMask("Enemy"));

        foreach(RaycastHit htiObj in rayHits) {
            htiObj.transform.GetComponent<Enemy>().HitByGrenade(transform.position);
        }
        Destroy(gameObject, 3);
    }
}
