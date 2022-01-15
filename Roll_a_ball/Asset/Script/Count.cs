using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Count : MonoBehaviour
{
    public int totalItemCount;
    public int stage;
    public Text stageCountText;
    public Text playerCountText;


    void Awake()
    {
        stageCountText.text = "/ " + totalItemCount.ToString();
    }

    public void GetItem(int counts)
    {
        playerCountText.text = counts.ToString();
    }
    void OnTriggerEnter(Collider other) {
        if(other.gameObject.tag == "Player")
        SceneManager.LoadScene(stage);
    }
}
