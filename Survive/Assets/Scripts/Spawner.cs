using UnityEngine;

public class Spawner : MonoBehaviour
{
    public Wave[] waves;
    public Enemy enemy;

    Wave currentWave;
    int currentwabeNumber;

    int enemiesRemainingToSpawn;
    int enemiesRemainingAlive;
    float nextSpawnTime;
    
    void Start()
    {
        NextWave();
    }
    void Update()
    {
        if(enemiesRemainingToSpawn > 0 && Time.time > nextSpawnTime) {
            enemiesRemainingToSpawn--;
            nextSpawnTime = Time.time + currentWave.timeBetweenSpawns;

            Enemy spawnedEnemy = Instantiate(enemy, Vector3.zero, Quaternion.identity) as Enemy;
            spawnedEnemy.OnDeath += OnEnemyDeath;
        }
    }

    void OnEnemyDeath()
    {
        enemiesRemainingAlive--;
        if(enemiesRemainingAlive == 0) {
            NextWave();
        }
    }
    void NextWave()
    {
        currentwabeNumber++;
        print("nextwaves        ");
        if(currentwabeNumber -1 < waves.Length){
            currentWave = waves[currentwabeNumber-1];

            enemiesRemainingToSpawn = currentWave.enemyCount;
            enemiesRemainingAlive = enemiesRemainingToSpawn;

        }
    }
    [System.Serializable]
    public class Wave
    {
        public int enemyCount;
        public float timeBetweenSpawns; // 스폰간격
    }
}
