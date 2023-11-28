using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuControl : MonoBehaviour
{
    public Button btRight;
    public Button btLeft;
    public Image imItem;
    public GameObject PrefabItem;
    public List<Transform> ListParentItem = new List<Transform>();
    public List<Sprite> ListSpriteItem = new List<Sprite>();
    //  public List<InforData> ListData = new List<InforData>();
    InforData[] arrData;
    int idPage = 0;
    // Start is called before the first frame update
    void Start()
    {
        GetInforData();
        JsonMgr.Instance.TimeJsonLoad();
        btLeft.onClick.AddListener(ClickLeft);
        btRight.onClick.AddListener(ClickRight);
        SetDefaultInfor();
        //PlayerPrefs.DeleteAll();
    }
    void SetDefaultInfor()
    {
        imItem.sprite = ListSpriteItem[0];
        LoadAllAnimal();
        LoadAllFruit();
        LoadAllHeroes();
        LoadAllRegions();
        LoadAllEmoji();
        for (int i = 0; i < ListParentItem.Count; i++)
        {
            if (i != 0)
            {
                ListParentItem[i].transform.parent.parent.gameObject.SetActive(false);
            }
        }
    }


    void ClickRight()
    {
        idPage += 1;
        CHeckPage();
        //AdsManager.Instance.ToggleBanner();
        SoundControl.Instance.PlayClick();

    }
    void ClickLeft()
    {
        idPage -= 1;
        CHeckPage();
        //AdsManager.Instance.ToggleBanner();
        SoundControl.Instance.PlayClick();
    }
    void CHeckPage()
    {
        idPage += ListParentItem.Count;
        idPage = idPage % ListParentItem.Count;
        imItem.sprite = ListSpriteItem[idPage];
        for (int i = 0; i < ListParentItem.Count; i++)
        {     if (idPage != i)
            {
                ListParentItem[i].transform.parent.parent.gameObject.SetActive(false);
            }
            else
            {
                ListParentItem[i].transform.parent.parent.gameObject.SetActive(true);
            }
        }
    }
    void LoadAllAnimal()
    {
        int _LevelLock = arrData[0].idLevel;
        for (int i = 0; i < ListObject.Instance.ListSpriteAnimal.Count; i++)
        {
            GameObject _item = GameObject.Instantiate(PrefabItem, ListParentItem[0]);
            _item.transform.localScale = new Vector3(1,1,1);
            _item.GetComponent<ItemLevelControl>().SetInfor(ListObject.Instance.ListSpriteAnimal[i],0,i+1,_LevelLock);
        }
    }

    void LoadAllFruit()
    {
        int _LevelLock = arrData[1].idLevel;
        for (int i = 0; i < ListObject.Instance.ListSpriteFruit.Count; i++)
        {
            GameObject _item = GameObject.Instantiate(PrefabItem, ListParentItem[1]);
            _item.transform.localScale = new Vector3(1, 1, 1);
            _item.GetComponent<ItemLevelControl>().SetInfor(ListObject.Instance.ListSpriteFruit[i],1, i + 1, _LevelLock);
        }
    }
    void LoadAllHeroes()
    {
        int _LevelLock = arrData[2].idLevel;
        for (int i = 0; i < ListObject.Instance.ListSpriteHeroes.Count; i++)
        {
            GameObject _item = GameObject.Instantiate(PrefabItem, ListParentItem[2]);
            _item.transform.localScale = new Vector3(1, 1, 1);
            _item.GetComponent<ItemLevelControl>().SetInfor(ListObject.Instance.ListSpriteHeroes[i],2, i + 1, _LevelLock);
        }
    }
    void LoadAllRegions()
    {
        int _LevelLock = arrData[3].idLevel;
        for (int i = 0; i < ListObject.Instance.ListSpriteRegions.Count; i++)
        {
            GameObject _item = GameObject.Instantiate(PrefabItem, ListParentItem[3]);
            _item.transform.localScale = new Vector3(1, 1, 1);
            _item.GetComponent<ItemLevelControl>().SetInfor(ListObject.Instance.ListSpriteRegions[i],3, i + 1, _LevelLock);
        }
    }
    void LoadAllEmoji()
    {
        int _LevelLock = arrData[4].idLevel;
        for (int i = 0; i < ListObject.Instance.ListSpriteEmoji.Count; i++)
        {
            GameObject _item = GameObject.Instantiate(PrefabItem, ListParentItem[4]);
            _item.transform.localScale = new Vector3(1, 1, 1);
            _item.GetComponent<ItemLevelControl>().SetInfor(ListObject.Instance.ListSpriteEmoji[i],4, i + 1, _LevelLock);
        }
    }
    void GetInforData()
    {
        List<InforData> GetData = new List<InforData>();
        string temp = PlayerPrefs.GetString(KeySave.DataLevel, "null");
        Debug.Log("Data:"+ temp);
        if (temp.Equals("null"))
        {
        
            for (int i = 0; i < 5; i++)
            {
                InforData _dt = new InforData();
                _dt.idType = i;
                _dt.idLevel = 12;
                GetData.Add(_dt);
            }
            string newData = JsonHelper.ToJson<InforData>(GetData);
            PlayerPrefs.SetString(KeySave.DataLevel, newData);
            PlayerPrefs.Save();
            GetInforData();
        }
        else
        {
            arrData = JsonHelper.FromJson<InforData>(temp);
            //ListData = arrData;
        }

    }
}
