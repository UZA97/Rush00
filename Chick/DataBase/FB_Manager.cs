using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

// 요소 추가
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;

public class FB_Manager : MonoBehaviour
{
    public DependencyStatus dependencyStatus;
    public static FB_Manager _instance;
    public FirebaseAuth auth;
    public DatabaseReference reference;
    public Firebase.Auth.FirebaseUser newUser;
    private Button button;
    public bool IsVaildName= false;
    private string[] strRank;

    private void Awake()
    {
        if(_instance == null) {
            _instance = this;
        }    
        auth = FirebaseAuth.DefaultInstance;
        reference = FirebaseDatabase.DefaultInstance.RootReference;
        FirebaseApp.DefaultInstance.Options.DatabaseUrl = new System.Uri("https://squid-9654f-default-rtdb.firebaseio.com/");
        button = GetComponent<Button>();
        print(DateTime.Now.ToString("MM/dd/yy"));
    }
    private void Start()
    {
        Login();
        // // 빠르게 데이터 삽입
        // PushUserInfo("fgㅇffa다", 1400);
        //ReadUserInfos();
        //IsUser();
    }
    private void Login()
    {
        // 제공되는 함수 : 이메일과 비밀번호로 로그인 시켜 줌
        auth.SignInAnonymouslyAsync().ContinueWith(
            task => { 
                if (task.IsCompleted && !task.IsFaulted && !task.IsCanceled) {
                    newUser = task.Result;
                    Debug.Log("로그인 하셨습니다.");
                    // CreateUserWithJson(newUser.UserId);
                }
                else if(!task.IsCanceled && !task.IsFaulted) {
                    Debug.Log("회원가입\n");
                    newUser = task.Result;
                    CreateUserWithPath(newUser.UserId);
                }
                else {
                    Debug.Log("인터넷 연결을 확인해 주세요.");
                }
            }
        );
    }
    public void CheckName(string name) 
    {
        //IsVaildName = false;
        reference.Child("users").OrderByChild("name").EqualTo(name).GetValueAsync().ContinueWith(
            task => 
            {
                if(task.IsFaulted) {
                    Debug.Log("Is Faild");
                    IsVaildName = false;
                    return;
                }
                else if (task.IsCompleted) {
                    DataSnapshot snapshot = task.Result;
                    // 중복되었을 때
                    foreach (DataSnapshot data in snapshot.Children) {
                        IDictionary userInfo = (IDictionary)data.Value;
                        if(newUser.UserId == data.Reference.Key) {
                            //SceneData._instance.username = (string)userInfo["name"];
                            Debug.Log((userInfo["name"].ToString()));
                            IsVaildName = true;
                        }
                        if(name == (string)userInfo["name"] && newUser.UserId != data.Reference.Key){
                            IsVaildName = false;
                            Debug.Log("같은 이름이 있거나 비어있어요!!");
                        }
                        return;
                    }
                }
                IsVaildName = true;
            }
        );
    }
    // public void CreateUserWithJson(string _userID)
    // {
    //     User _userInfo = new User();
    //     string json = JsonUtility.ToJson(_userInfo);
    //     reference.Child("users").Child(_userID).SetRawJsonValueAsync(json);
    // }
    public void CreateUserWithPath(string _userID)
    {
        User _userInfo = new User();
        reference.Child("users").Child(_userID).Child("score").SetValueAsync(_userInfo.GetUserScore());
        reference.Child("users").Child(_userID).Child("name").SetValueAsync(_userInfo.GetUserName());
        reference.Child("users").Child(_userID).Child("rank").SetValueAsync(_userInfo.GetUserRank());
        reference.Child("users").Child(_userID).Child("best_score").SetValueAsync(_userInfo.GetUserBestScore());
        reference.Child("users").Child(_userID).Child("create_time").SetValueAsync(_userInfo.user_createAt);
        reference.Child("users").Child(_userID).Child("update_time").SetValueAsync(_userInfo.user_updateTime);
    }
    public void PushUserInfo(string _name, int _score)
    {
        User _userInfo  = new User();
        // Push를 이용하면, _userID로 적용했던 부분이 임의의 키로 설정되고, 이를 반환해줌
        string key = reference.Child("users").Push().Key;
        reference.Child("users").Child(key).Child("name").SetValueAsync(_name);
        reference.Child("users").Child(key).Child("rank").SetValueAsync(_userInfo.GetUserRank());
        reference.Child("users").Child(key).Child("best_score").SetValueAsync(_score);
    }
    public void UpdateUserInfo()
    {
        string _userID = newUser.UserId;
        User _userInfo = new User();
        _userInfo.SetUserName(SceneData._instance.username);
        _userInfo.SetUserScore(GameManager._instance.nScore);
        _userInfo.SetUserBestScore(GameManager._instance.nMaxScore);
        reference.Child("users").Child(_userID).UpdateChildrenAsync(_userInfo.ToDictionary());
    }
    // 읽기
    public void ReadUserInfos()
    {
        reference.Child("users").GetValueAsync().ContinueWithOnMainThread(task =>
            {
                if (task.IsCompleted) {
                    DataSnapshot snapshot = task.Result;
                    foreach (DataSnapshot data in snapshot.Children) {
                        IDictionary userInfo = (IDictionary)data.Value;
                        Debug.Log("Name: " + userInfo["name"] + " / Score: " + userInfo["best_score"] + " / ");
                    }
                }
            }
        );
    }
}