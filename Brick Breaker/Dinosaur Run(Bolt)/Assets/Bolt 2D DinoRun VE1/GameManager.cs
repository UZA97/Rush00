using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public  float Level(int score)
    {
        int defaultspeed = -3;
        int increSpeed = (score * -1) / 100;
        if(increSpeed < -3)
            increSpeed = -3;

        return defaultspeed + increSpeed;
    }
}
