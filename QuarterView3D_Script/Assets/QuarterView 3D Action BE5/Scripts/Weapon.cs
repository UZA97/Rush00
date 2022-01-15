using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type {Melee, Range};
    public Type type;
    public int damage;
    public int maxAmmo;
    public int curAmmo;
    public float rate;
    public BoxCollider meleeArea;
    public TrailRenderer trailEffect;
    public Transform bulletPos; // 프리펩 생성위치
    public GameObject bullet; // 프리펩 저장
    public Transform bulletCasePos;
    public GameObject bulletCase;

    public void Use()
    {
        if(type == Type.Melee)
        {
            StopCoroutine("Swing");
            StartCoroutine("Swing");
        }
        else if (type == Type.Range && curAmmo > 0)
        {
            curAmmo--;
            StartCoroutine("Shot");
        }
    }
    IEnumerator Swing()
    {
        //1
        yield return new WaitForSeconds(0.1f); // 0.1 대기
        meleeArea.enabled = true;
        trailEffect.enabled = true;
        //2
        yield return new WaitForSeconds(0.3f); // 코루틴 탈출
        meleeArea.enabled = false;
        
        yield return new WaitForSeconds(0.3f); // 코루틴 탈출
        trailEffect.enabled = false;
    }
    
    IEnumerator Shot()
    {
        // 총알 발사
        GameObject intantBullet = Instantiate(bullet, bulletPos.position,bulletPos.rotation);
        Rigidbody bulletRigid = intantBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 150; // 총알 속도
        yield return null;
        
        // 탄피 배출
        GameObject intantCase = Instantiate(bulletCase, bulletCasePos.position,bulletCasePos.rotation);
        Rigidbody caseRigid = intantCase.GetComponent<Rigidbody>();
        Vector3 caseVec = bulletCasePos.forward * Random.Range(-3,-2) + Vector3.up * Random.Range(2,3);
        caseRigid.AddForce(caseVec,ForceMode.Impulse);
        caseRigid.AddTorque(Vector3.up * 10, ForceMode.Impulse);
    }
}
