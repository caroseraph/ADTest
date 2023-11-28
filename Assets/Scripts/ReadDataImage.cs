using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ReadDataImage : MonoBehaviour
{
    public static ReadDataImage Instance;
    public Sprite _image;
    int _width = 0;
    int _heigh = 0;
    public Color[,] arrColor;
    public List<Color> ListColor = new List<Color>();
    public List<BubbleControl> ListBubble = new List<BubbleControl>();
    public GameObject Bubble;
    public GameObject BubbleNull;
    public Transform ParentBubble;
    public Image imItem;
    public GameObject EFTouch;
    public GameObject EFWin;
    public GameObject PanelEndGame;
    public Button btNext;
    public Button btHome;
    public Text txtType;
    public Text txtLevel;
    public Text textCountdown;
    public GameObject m_goLoading;
    public GameObject m_goLose;
    public Button btnRetry;
    public Button btnHome;

    private int m_iCountdown;
    void Awake()
    {
        Instance = this;
    }
    private void Start()
    {
        PanelEndGame.SetActive(false);
        EFWin.SetActive(false);
        m_goLoading.SetActive(false);
        SetCountdownStart();
        //GetColor();
        //LoadAllBubble();

        GetDataPlay();
        btNext.onClick.AddListener(NextLevel);
        btHome.onClick.AddListener(BackHome);
        btnRetry.onClick.AddListener(ClickRetry);
        btnHome.onClick.AddListener(BackHome);
        m_goLose.SetActive(false);
    }


    void SetCountdownStart() {
        string _getdata = PlayerPrefs.GetString(KeySave.DataPlay);
        InforData _data = JsonUtility.FromJson<InforData>(_getdata);
        m_iCountdown = JsonMgr.Instance.GetTimeValue(_data.idType, _data.idLevel) ;
        textCountdown.text = m_iCountdown.ToString();
        ShowCountdown();
    }
    void ShowCountdown() {
        InvokeRepeating("SetCountDown", 0f, 1f);
    }
    void SetCountDown() {
        if (m_iCountdown > 0)
        {
            textCountdown.text = m_iCountdown.ToString();
            m_iCountdown--;
        }
        else
        {
            m_iCountdown = 0;
            textCountdown.text = m_iCountdown.ToString();
            CancelInvoke("SetCountDown");
            m_goLose.SetActive(true);
        }
    }


    public IEnumerator DelayGetColor()
    {
        _width = _image.texture.width / 10;
        _heigh = _image.texture.height / 10;
        arrColor = new Color[_width, _heigh];
        //    Debug.Log("Size Image:" + _width + "," + _heigh);

        int i, j;
        Vector3 newPos = new Vector3(-(_width - 1) * 0.5f / 2, -(_heigh - 1) * 0.5f / 2, 0);
        for (i = 0; i < _width; i++)
        {
            int x = i * 10 + 5;
            for (j = 0; j < _heigh; j++)
            {
                int y = j * 10 + 5;
                Color _newColor = _image.texture.GetPixel(x, y);
                //Debug.Log("i:" + i + "  j:" + j + "   _newColor:" + _newColor);
                arrColor[i, j] = _newColor;
                yield return new WaitForSeconds(0.05f);
                LoadOneBubble(i, j, newPos);
            }
        }
        //yield return new WaitForSeconds(0.5f);
        //GetColor();
        //LoadAllBubble();
    }

    void LoadOneBubble(int i, int j, Vector3 newPos)
    {
        if (arrColor[i, j].a > 0.5f)
        {
            GameObject _bb = Instantiate(Bubble, null);
            _bb.transform.parent = ParentBubble;
            _bb.transform.localPosition = new Vector3(i * 0.5f + newPos.x, j * 0.5f + newPos.y, 0);
            BubbleControl _scr = _bb.GetComponent<BubbleControl>();
            ListBubble.Add(_scr);
            _scr.SetColor(arrColor[i, j]);
        }
    }


    public void GetColor()
    {
        _width = _image.texture.width/10;
        _heigh = _image.texture.height/10;
        arrColor = new Color[_width, _heigh];
        int i, j;
        for (i = 0; i < _width; i++)
        {
            for (j = 0; j < _heigh; j++)
            {
                Color _newColor = _image.texture.GetPixel(i * 10 + 5, j * 10 + 5);
                arrColor[i, j] = _newColor;
            }
        }
    }

    void LoadAllBubble()
    {
        _width = _image.texture.width/10;
        _heigh = _image.texture.height/10;
        Debug.Log("_width:" + _width+ "_heigh:"+ _heigh);

        Vector3 newPos = new Vector3(-(_width-1)*0.5f/2 , -(_heigh - 1) * 0.5f / 2, 0);
        for (int i = 0; i < _width; i++)
        {
            for (int j = 0; j < _heigh; j++)
            {

              //  Debug.Log(i + "," + j + ":" + arrColor[i, j].ToString());
                if (arrColor[i, j].a > 0.5f)
                {
                    GameObject _bb = Instantiate(Bubble, null);
                    _bb.transform.parent = ParentBubble;
                    _bb.transform.localPosition = new Vector3(i * 0.5f + newPos.x, j * 0.5f+ newPos.y, 0);
                    BubbleControl _scr = _bb.GetComponent<BubbleControl>();
                    ListBubble.Add(_scr);
                    _scr.SetColor(arrColor[i, j]);
                }
                else
                {
                    //GameObject _bb = GameObject.Instantiate(BubbleNull, null);
                    //_bb.transform.position = new Vector3(i * 0.5f, j * 0.5f, 0);
                }

            }
        }
    }
    bool CheckPop()
    {
        bool isDone = true;
        for (int i = 0; i < ListBubble.Count; i++)
        {
            if (ListBubble[i].isConvex)
            {
                isDone = false;
                break;
            }
        }
        return isDone;
    }
    public void CheckDone()
    {
        bool isCheck = CheckPop();
       // Debug.Log("CheckPop:" + isCheck);
        if (isCheck)

        {
         //   Debug.Log("Set Scale");
            Sequence mysequence = DOTween.Sequence();
            mysequence.Append(ParentBubble.transform.DOScale(1.1f, 0.2f));

            mysequence.Append(ParentBubble.transform.DOScale(1f, 0.2f)).OnComplete(ResetBubble);
            //ResetBubble();
            PanelEndGame.SetActive(true);
            EFWin.SetActive(true);
            CancelInvoke("SetCountDown");
            CheckNextLevel();
        }
    }
    void ResetBubble()
    {
      //  Debug.Log("");
    }
    public void AddEFTouch(Vector3 _pos,Color _color)
    {
        GameObject ef = GameObject.Instantiate(EFTouch, null);
        ef.transform.position = _pos;
        ef.GetComponent<EFSmoke>().SetValues(_color);
    }
    void GetDataPlay()
    {
        string _getdata = PlayerPrefs.GetString(KeySave.DataPlay);
        Debug.Log("DataPlay:" + _getdata);
        InforData _data = JsonUtility.FromJson<InforData>(_getdata);
        Debug.Log("_data.idType:" + _data.idType+ " _data.idLevel:"+ _data.idLevel);

        switch (_data.idType)
        {
            case 0:
                txtType.text = "Animal";
                txtLevel.text = "Level " + _data.idLevel;
                if (ListObject.Instance.ListSpriteAnimal.Count > _data.idLevel)
                    _image = ListObject.Instance.ListSpriteAnimal[_data.idLevel-1];
                break;
            case 1:
                txtType.text = "Fruit";
                txtLevel.text = "Level " + _data.idLevel;
                if (ListObject.Instance.ListSpriteFruit.Count > _data.idLevel)
                    _image = ListObject.Instance.ListSpriteFruit[_data.idLevel-1];
                break;
            case 2:
                txtType.text = "Heroes";
                txtLevel.text = "Level " + _data.idLevel;
                if (ListObject.Instance.ListSpriteHeroes.Count > _data.idLevel)
                    _image = ListObject.Instance.ListSpriteHeroes[_data.idLevel-1];
                break;
            case 3:
                txtType.text = "Regions";
                txtLevel.text = "Level " + _data.idLevel;
                if (ListObject.Instance.ListSpriteRegions.Count > _data.idLevel)
                    _image = ListObject.Instance.ListSpriteRegions[_data.idLevel-1];
                break;
            case 4:
                txtType.text = "Emoji";
                txtLevel.text = "Level " + _data.idLevel;
                if (ListObject.Instance.ListSpriteEmoji.Count > _data.idLevel)
                    _image = ListObject.Instance.ListSpriteEmoji[_data.idLevel-1];
                break;
            default:
                break;
        }

        GetInfor();
    }
    void GetInfor()
    {
        imItem.sprite = _image;
        GetColor();
        LoadAllBubble();
        //StartCoroutine(DelayGetColor());
    }
    void CheckNextLevel()
    {
        string _getdata = PlayerPrefs.GetString(KeySave.DataPlay, "null");
        Debug.Log("DataPlay:" + _getdata);
        InforData olddata = JsonUtility.FromJson<InforData>(_getdata);


        string _arrDt = PlayerPrefs.GetString(KeySave.DataLevel, "");
        InforData[] arrData = JsonHelper.FromJson<InforData>(_arrDt);

        Debug.Log("Check Next Level:" + olddata.idType +"/"+olddata.idLevel );
        for (int i = 0; i < arrData.Length; i++)
        {
            //Debug.Log("InforDataSave:"+ arrData[i].ToString());
            if (olddata.idType == arrData[i].idType)
            {
                //Debug.Log("type......:" +i+"  ; "+ arrData[i].idType);
                if (olddata.idLevel == arrData[i].idLevel  )
                {
                    //Debug.Log("Hahahahaha:");
                    arrData[i].idLevel += 1;
                  
                }

            }
        }

        InforData dataPlay = new InforData();
        dataPlay.idType = olddata.idType;
        dataPlay.idLevel = olddata.idLevel+1;
        string temp = JsonUtility.ToJson(dataPlay);
        PlayerPrefs.SetString(KeySave.DataPlay, temp);

        string newData = JsonHelper.ToJson<InforData>(arrData);
        PlayerPrefs.SetString(KeySave.DataLevel, newData);
        PlayerPrefs.Save();

  
    }

    /// <summary>
    /// Click Retry
    /// </summary>
    void ClickRetry() {
        SoundControl.Instance.PlayClick();
        m_goLoading.SetActive(true);
        AdsManager.Instance.ShowRewardVideo();
    }

    void NextLevel()
    {
        SoundControl.Instance.PlayClick();
        //SceneManager.LoadScene(3);
        m_goLoading.SetActive(true);
        AdsManager.Instance.ShowRewardVideo();
    }

    void BackHome()
    {
        SoundControl.Instance.PlayClick();
        SceneManager.LoadScene(2);
        //AdsManager.Instance.ShowRewardVideo();
        //AdsManager.Instance.ShowFull();
    }
}

