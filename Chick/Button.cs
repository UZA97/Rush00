using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Button : MonoBehaviour
{
    public InputField Input_UserName;
    public GameObject RankGroup;
    public GameObject OptionGroup;
    public GameObject InputNamePannel;
    public Text UserNameText;
    public string userName;

    private void Start()
    {
        if(!PlayerPrefs.HasKey("UserName")) {
            PlayerPrefs.SetString("UserName", "-");
        }
        userName = PlayerPrefs.GetString("UserName");
        SceneData._instance.username = userName;
    }
    private void Update()
    {
        if(SceneManager.GetActiveScene().name=="Login")
            //FB_Manager._instance.CheckName(Input_UserName.text);
            FB_Manager._instance.CheckName(userName);
        print(userName);
    }
    public void GameStart()
    {
        if(FB_Manager._instance.IsVaildName) {
            SceneManager.LoadScene("Main");
        }
        else
            Debug.Log("이름을 다시 확인해 주세요");
    }
    public void Restart()
    {
        SceneManager.LoadScene("Main");
        GameManager._instance.IsOver = false;
    }
    public void InputUserButton()
    {
        InputNamePannel.SetActive(true);
    }
    public void InputUserName()
    {
        if(Input_UserName.text == "") {
            Debug.Log("같은 이름이 있거나 비어있어요!!");
            return;
        }
        else if(FB_Manager._instance.IsVaildName){
            PlayerPrefs.SetString("UserName", Input_UserName.text);
            print("123");
            // userName = PlayerPrefs.GetString("UserName");
            // print("2");
            // User._instance.SetUserName(userName);
            // print("3");
            // InputNamePannel.SetActive(false);
            SceneData._instance.username = userName;
            //SceneData._instance.username = Input_UserName.text; 
            User._instance.SetUserName(Input_UserName.text);
            InputNamePannel.SetActive(false);
        }
    }
    public void ShowOption()
    {
        GameManager._instance.IsPause = true;
        GameManager._instance.ChickGroup.SetActive(false);
        OptionGroup.SetActive(true);
    }
    public void GameToMain()
    {
        SceneManager.LoadScene("Login");
        //Destroy(SceneData._instance.gameObject);
    }
    public void Exit()
    {
        GameManager._instance.IsPause = false;
        GameManager._instance.ChickGroup.SetActive(true);
        OptionGroup.SetActive(false);
    }
    public void EndGame()
    {
        Application.Quit();
    }

    public void ShowRank()
    {
        RankGroup.SetActive(true);
    }
    public void RanktoMain()
    {
        RankGroup.SetActive(false);
    }
}
