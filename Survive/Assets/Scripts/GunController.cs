using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour
{
    public Transform weaponHold;
    public Gun startingGun; // 처음 시작무기
    Gun equippedGun;        // 현재 장착중인 총을 저장할 변수
    void Start()
    {   
        if(startingGun != null) {
            EquipGun(startingGun);
        }
    }
    public void EquipGun(Gun gunToEquip)
    {
        if(equippedGun != null) {
            Destroy(gameObject);
        }
        equippedGun = Instantiate(gunToEquip,weaponHold.position,weaponHold.rotation) as Gun;   // 형변환
        equippedGun.transform.parent = weaponHold;
    }
    public void Shoot()
    {
        if(equippedGun != null) {
            equippedGun.Shoot();
        }
    }
}
