using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class item : MonoBehaviour
{    
    public float rotateSpeed; // 아이템 회전 선언
    void Update()
    {
        transform.Rotate(Vector3.down * rotateSpeed * Time.deltaTime, Space.World);
        // 아래방향으로 회전 Space.world 잊지말기!
    }
}