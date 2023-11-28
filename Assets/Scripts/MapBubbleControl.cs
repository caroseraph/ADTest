using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class MapBubbleControl : MonoBehaviour
{
    public static MapBubbleControl Instance;
    public Text txtScore;
    public Button btHome;
    public GameObject PrefabBubble;  
    public Transform ParentBubble;
    int Score = 0;
    private void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        AddBubble();
        GetScore();
        btHome.onClick.AddListener(BackHome);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void AddBubble()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                GameObject _bubble = GameObject.Instantiate(PrefabBubble, ParentBubble);
                _bubble.transform.position = new Vector3(i*0.4f -1.8f, j*0.4f -3f, 0);
            }
        }
    }
    public void ChangeScore()
    {
        Score += 1;
        txtScore.text = "Broken : " + Score;
        PlayerPrefs.SetInt(KeySave.Score, Score);
    }
    void GetScore()
    {
        Score = PlayerPrefs.GetInt(KeySave.Score,0);
        txtScore.text = "Broken : " + Score;
    }
    void BackHome()
    {
        Application.LoadLevel("Menu");
        SoundControl.Instance.PlayClick();
        AdsManager.Instance.ShowFull();
        //AdsManager.Instance.ShowBaner();
    }
}
