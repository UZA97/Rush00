using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Command : MonoBehaviour
{
    #region 
    #endregion

    #region GameManager.Cs
    [Header("GameManagerValue")]
    public float groundY = -55.489f;
    public GameObject P_Ball, P_GreenOrb, P_Block, P_ParticleBlue, P_ParticleGreen, P_ParticleRed;
    public GameObject BallPreview, Arrow, GameOverPanel, BallCountTextObj, BallPlusTextObj;
    public Transform GreenBallGroup, BlockGroup, BallGroup;
    public LineRenderer MouseLR, BallLR;
    public Text BestScoreText, ScoreText, BallCountText, BallPlusText, FinalScoreTExt, NewRecordText;
    public Color[] blockColor;
    public Color greenColor;
    public AudioSource S_GameOver, S_GreenOrb, S_Plus;
    public AudioSource[] S_Block;
    public Quaternion QI = Quaternion.identity;
    public bool shotTrigger, shotable;
    public Vector3 veryFirstPos;

    Vector3 firstPos, secondPos, gap;
    int score, timerCount, launchIndex;
    bool timerStart, isDie, isNewRecord, isBlockMoving;
    float timeDelay;
    #endregion

    #region BallScript.CS
    #endregion
}
