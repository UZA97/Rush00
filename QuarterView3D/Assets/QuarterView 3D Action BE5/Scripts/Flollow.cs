using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flollow : MonoBehaviour
{
    public Transform target;
    public Vector3 offset;
    void Update()
    {
        transform.position = target.position + offset; // 카메라 위치 조정
    }
}
