using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovin : MonoBehaviour
{
    Transform playerTrnasform; // GameObject에 연결된 것
    Vector3 Offset; // offset으로 거리 두기
    void Awake()
    {
        playerTrnasform = GameObject.FindGameObjectWithTag("Player").transform;
        // Player에 초점 맞추기

        Offset = transform.position - playerTrnasform.position;
        // Offset = 메인카메라 거리 - Player 거리
    }

    // Update is called once per frame
    void LateUpdate() // 카메라 이동에 관한것은 LateUpdate쓰자!
    {
        transform.position = playerTrnasform.position + Offset;
        // 메인카메라 위치 =  플레이어 위치 + Offset
    }
}
