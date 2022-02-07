using UnityEngine;

public class Projectile : MonoBehaviour
{
    public LayerMask collisionMask;
    float speed = 10.0f;
    float damage = 1.0f;
    float lifetime = 2.0f;
    float skinWidth = 0.1f;
    void Start()
    {
        Destroy(gameObject,lifetime);
        Collider[] initialCollisions = Physics.OverlapSphere(transform.position, 1.0f, collisionMask);
        if(initialCollisions.Length>0) {
            OnHitObject(initialCollisions[0]);
        }
    }
    public void SetSpeed(float newspeed)
    {
        speed = newspeed;
    }
    private void Update()
    {
        float moveDistance = speed * Time.deltaTime;
        CheckCollisions(moveDistance);
        transform.Translate(Vector3.forward * moveDistance);
    }

    private void CheckCollisions(float moveDistance)
    {
        Ray ray = new Ray(transform.position,transform.forward);
        RaycastHit hit;
        if(Physics.Raycast(ray, out hit, moveDistance + skinWidth, collisionMask, QueryTriggerInteraction.Collide)){
            OnHitObject(hit);
        }
    }
    private void OnHitObject(RaycastHit hit)
    {
        IDamageable damageableObject = hit.collider.GetComponent<IDamageable>();
        if(damageableObject != null) {
            damageableObject.TakeHit(damage,hit);
        }
        GameObject.Destroy(gameObject);
    }
    void OnHitObject(Collider hit)
    {
        IDamageable damageableObject = hit.GetComponent<IDamageable>();
        if(damageableObject != null) {
            damageableObject.TakeDamage(damage);
        }
        GameObject.Destroy(gameObject);
    }
}
