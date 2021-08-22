using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int damage;
    public bool isRock;
    public bool isMelee;  // 근접공격 범위가 파괴되지 않도록 조건 추가

    void OnCollisionEnter(Collision collision) {
        if (!isRock && collision.gameObject.tag == "Floor")
        {
            Destroy(gameObject,3);
        }
        
    }

    void OnTriggerEnter(Collider other)
    {
        if (!isMelee && other.gameObject.tag == "WallF")
        {
             Destroy(gameObject);
        }
    }
}
