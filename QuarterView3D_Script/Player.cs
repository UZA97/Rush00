using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;
    public GameObject[] grenades;
    public GameObject[] weapons;
    public bool[] hasWeapons;
    // 탄약, 동전, 체력, 수류탄 변수
    public int ammo;
    public int coin;
    public int health;
    public int hasGrenades;
    public int score;
    public GameObject grenadeObj;
    public Camera followCamera;

    public int maxAmmo;
    public int maxCoin;
    public int maxHealth;
    public int maxHasGrenades;

    float hAxis;
    float vAxis;
    bool wDown; // 걷기 키
    bool jDown; // 점프 키
    bool fDown; // 발사 키
    bool rDown; // 재장전 키
    bool dodgeDown; // 회피 키
    bool iDown; // 아이템 줍기 키
    bool gDown;
    bool isSwap;
    bool isJump;
    bool isDodge;
    bool isReload;
    bool isTouch;
    bool isFireReady;
    bool isBorder;
    bool isDamage;
    bool sDown1; // 무기 스왑
    bool sDown2;
    bool sDown3;
    bool isShop;
    bool isDead;
    int JumpCnt = 2;
    float fireDelay;
    Vector3 moveVec;
    Vector3 dodgeVec;
    Animator anim;
    MeshRenderer[] meshs;// 플레이어 피격시 색변환 / 배열은 머리,팔,등등이 있기 때문
    Rigidbody rigid;
    GameObject nearObject;
    public Weapon equipWeapon;
    public GameManager manager;
    int equipWeaponIndex = -1;

    void Awake() {
        rigid = GetComponent<Rigidbody>();
        anim = GetComponentInChildren<Animator>();
        meshs = GetComponentsInChildren<MeshRenderer>();

        // Debug.Log(PlayerPrefs.GetInt("MaxScore"));
        PlayerPrefs.SetInt("MaxScore", 9999999);
    }

    void Update() {
        GetInput();
        Move();
        Turn();
        Jump();
        Grenade();
        Attack();
        Reload();
        Dodge();
        Swap();
        Interation();
    }

    void GetInput() {
        hAxis = Input.GetAxisRaw("Horizontal");
        vAxis = Input.GetAxisRaw("Vertical"); // 움직임
        wDown = Input.GetButton("Walk");
        jDown = Input.GetButtonDown("Jump");
        fDown = Input.GetButton("Attack");
        rDown = Input.GetButtonDown("Reload");
        dodgeDown = Input.GetButtonDown("Dodge");
        iDown = Input.GetButtonDown("Interation");
        sDown1= Input.GetButtonDown("Swap1");
        sDown2= Input.GetButtonDown("Swap2");
        sDown3= Input.GetButtonDown("Swap3");
        gDown = Input.GetButtonDown("Fire2");
    }

    void Move() // 움직임 구현 
    {
        moveVec = new Vector3(hAxis, 0, vAxis).normalized;

        if(isDodge) // 회피시 이동제한
            moveVec = dodgeVec;

        if(isSwap || isDead)
            moveVec = Vector3.zero;

        if(!isBorder) // 걷기 눌렀을 때 속력 변화 및 벽 통과방지
            transform.position += moveVec * speed * (wDown ? 0.3f : 1f) * Time.deltaTime;
               
        // 애니메이션 구현
        anim.SetBool("isRun", moveVec != Vector3.zero);
        anim.SetBool("isWalk", wDown);
    }

    void Turn()
    {
        // 키보드에 의한 회전
        transform.LookAt(transform.position + moveVec); // 회전하는 방향 보기

        // 마우스에 의한 회전
        if(fDown && !isDead)
        {
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit rayHit;
            if(Physics.Raycast(ray, out rayHit, 100))
            {
                Vector3 nextVec = rayHit.point - transform.position;
                nextVec.y = 0;
                transform.LookAt(transform.position + nextVec);
            }
        }
    }

    void Jump() // 점프 및 점프애니매이션 구현 
    {
        if(jDown && !isJump && !isDodge && !isShop && !isDead)
        {
            rigid.AddForce(Vector3.up * 20, ForceMode.Impulse);
            JumpCnt--; // 2단점프 구현
            anim.SetBool("isJump", true);
            anim.SetTrigger("doJump");
            if(JumpCnt == 0)
                isJump = true;
        }
    }
    void Grenade()
    {
        if(hasGrenades == 5)
            hasGrenades--;
        
        if(hasGrenades == 0)
            return;

        if(gDown && !isReload && !isSwap && !isDead) {
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit rayHit;
            if(Physics.Raycast(ray, out rayHit, 100))
            {
                Vector3 nextVec = rayHit.point - transform.position;
                nextVec.y = 10;

                GameObject instantGrenade = Instantiate(grenadeObj, transform.position, transform.rotation);
                Rigidbody rigidGrenade = instantGrenade.GetComponent<Rigidbody>();
                rigidGrenade.AddForce(nextVec, ForceMode.Impulse);
                rigidGrenade.AddTorque(Vector3.back * 5, ForceMode.Impulse);

                hasGrenades --;
                grenades[hasGrenades].SetActive(false);
            }

        }
    }

    void Attack() // 공격 함수
    {
        if(equipWeapon == null)
            return;
        
        fireDelay += Time.deltaTime;
        isFireReady = equipWeapon.rate < fireDelay;

        if (!isDead && fDown && isFireReady && !isDodge && !isSwap && !isReload && !isShop)
        {
            equipWeapon.Use();
            anim.SetTrigger(equipWeapon.type == Weapon.Type.Melee ? "doSwing" : "doShot"); // 애니메이션 적용
            fireDelay = 0;
        }
    }

    void Reload()
    {
        // 무기가 없거나, 근접무기거나, 총알이 없을경우 재장전 불가
        if(equipWeapon == null || equipWeapon.type == Weapon.Type.Melee || ammo == 0)
            return;

       if(rDown && !isSwap && !isShop && !isDead) // 무기바꾸는중에 장전불가
       {
            anim.SetTrigger("doReload");
            isReload = true;

            Invoke("ReloadOut", 2f);
       }
       if(equipWeapon.curAmmo == equipWeapon.maxAmmo)
       {
           return;
       }
    }
    void ReloadOut()
    {
        int reAmmo = ammo < equipWeapon.maxAmmo ? ammo : equipWeapon.maxAmmo;
        equipWeapon.curAmmo = reAmmo;
        ammo -= reAmmo;
        isReload = false;
    }
    void Dodge() // 회피 및 회피애니매이션 구현
    {
        if(dodgeDown && !isDodge && !isJump && !isShop && !isDead)
        {
            dodgeVec = moveVec; // 회피시 이동불가
            speed *= 2;
            anim.SetTrigger("doDodge");
            isDodge = true;
            Invoke("DodgeOut",0.7f);
        }
    }
    void DodgeOut()
    {
        isDodge = false;
        speed *= 0.5f;
    }
    void Swap()
    {
        // 아이템을 먹었을 때 다른 아이템 사용 방지
        if(sDown1 && (!hasWeapons[0] || equipWeaponIndex == 0))
            return;
        if(sDown2 && (!hasWeapons[1] || equipWeaponIndex == 1))
            return;
        if(sDown3 && (!hasWeapons[2] || equipWeaponIndex == 2))
            return;
        int weaponIndex = -1;
        if (sDown1) weaponIndex = 0;
        if (sDown2) weaponIndex = 1;
        if (sDown3) weaponIndex = 2;
        if(sDown1 || sDown2 || sDown3)
        {
            if(equipWeapon != null)
                equipWeapon.gameObject.SetActive(false);

            equipWeaponIndex = weaponIndex;
            equipWeapon = weapons[weaponIndex].GetComponent<Weapon>();
            equipWeapon.gameObject.SetActive(true);
            anim.SetTrigger("doSwap");
            isSwap = true;
            Invoke("Swapout", 0.0001f);
        }
    }
    void Swapout()
    {
        isSwap = false;
    }
    void Interation() // 근처 무기 습득
    {
        if(iDown && (nearObject != null) && !isJump && !isDodge)
        {
            if(nearObject.tag == "Weapon")
            {
                Item item = nearObject.GetComponent<Item>();
                int weaponIndex = item.value;
                hasWeapons[weaponIndex] = true;

                Destroy(nearObject);
            }
            else if(nearObject.tag == "Shop")
            {
                Shop shop = nearObject.GetComponent<Shop>();
                shop.Enter(this);
                isShop = true;
            }
        }

    }
    void StopToWall() // 물리엔진 보완
    {
        Debug.DrawRay(transform.position, transform.forward * 5, Color.green);
        isBorder = Physics.Raycast(transform.position, transform.forward, 5, LayerMask.GetMask("Wall"));
    }

    void FreezeRotatoin() // 물리엔진 보완
    {
        rigid.angularVelocity = Vector3.zero;
    }

    void FixedUpdate() // 물리엔진 보완
    {
        FreezeRotatoin();
        StopToWall();
    }

    void OnCollisionEnter(Collision collision) // 충돌정보
    {
        if(collision.gameObject.tag == "Floor")
        {
            anim.SetBool("isJump",false);
            isJump = false;
            JumpCnt = 2;
        }
        if(collision.gameObject.tag == "Wall") // 벽 충돌시 원점
        {
           transform.position = moveVec * speed *  0.3f * Time.deltaTime;
        }
    }
    void OnTriggerEnter(Collider other) { // 아이템 습득 로직
        if(other.tag == "Item")
        {
            Item item = other.GetComponent<Item>();
            switch(item.type) {
                case Item.Type.Ammo:
                    ammo += item.value;
                    if(ammo > maxAmmo)
                        ammo = maxAmmo;
                    break;
                case Item.Type.Coin:
                    coin += item.value;
                    if(coin > maxCoin)
                        coin = maxCoin;
                    break;
                case Item.Type.Heart:
                    health += item.value;
                    if(health > maxHealth)
                        health = maxHealth;
                    break;
                case Item.Type.Grende:
                    grenades[hasGrenades].SetActive(true);
                    hasGrenades += item.value;
                    if(hasGrenades > maxHasGrenades)
                        hasGrenades = maxHasGrenades;
                    break;
            }
            Destroy(other.gameObject);
        }
        else if (other.tag == "EnemyBullet") // 플레이어 피격 로직
        {
            if (!isDamage) {
                Bullet enemyBullet = other.GetComponent<Bullet>();
                health -= enemyBullet.damage;

                bool isBossAtk = other.name == "Boss Melee Area";

                StartCoroutine(OnDamage(isBossAtk));
            }
            if(other.GetComponent<Rigidbody>() != null)
                    Destroy(other.gameObject);
        }
    }

    IEnumerator OnDamage(bool isBossAtk)
    {
        isDamage = true;
        foreach(MeshRenderer mesh in meshs) {
            mesh.material.color = Color.yellow;
        }

        if(isBossAtk)
            rigid.AddForce(transform.forward * -20, ForceMode.Impulse);

        if(health <=0 && !isDead)
            OnDie();

        yield return new WaitForSeconds(1f);

        isDamage = false;
        foreach(MeshRenderer mesh in meshs) {
            mesh.material.color = Color.white;
        }

        if(isBossAtk)
            rigid.velocity = Vector3.zero;
    }
    void OnDie()
    {
        anim.SetTrigger("doDie");
        isDead = true;
        manager.GameOver();
    }
    void OnTriggerStay(Collider other) {
        if(other.tag == "Weapon" || other.tag == "Shop")
            nearObject = other.gameObject;
    }
    void OnTriggerExit(Collider other) {
        if(other.tag == "Weapon")
            nearObject = null;
        else if(other.tag == "Shop") {
            Shop shop = nearObject.GetComponent<Shop>();
            shop.Exit();
            isShop = false;
            nearObject = null;
        }
    }
}
