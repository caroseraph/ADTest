using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControl : MonoBehaviour
{
    public static GameControl Instance;
    public List<GameObject> ListPrefabOB = new List<GameObject>();
    [Header("other")]
    public Transform ParentScrollOBJ;
    public GameObject PrefabItemObject;
    public Transform OBJ;
    public Button btHome;
    private void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        AddItemObject();
        AddObject(0);
        btHome.onClick.AddListener(CickHome);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void AddItemObject()
    {
        for (int i = 0; i < ListPrefabOB.Count; i++)
       
        {
            GameObject _item = GameObject.Instantiate(PrefabItemObject, ParentScrollOBJ);
            _item.transform.localScale = new Vector3(1,1,1);
            ItemObject _scr = _item.GetComponent<ItemObject>();
            Sprite temp = ListPrefabOB[i].gameObject.GetComponent<ObjectControl>().imItem;
            _scr.SetImageObject(i,temp);
        } 
    }
    public void AddObject(int _id)
    {
        if (OBJ.transform.childCount > 0)
        {
          Destroy(  OBJ.GetChild(0).gameObject);
        }
        GameObject newOB = GameObject.Instantiate(ListPrefabOB[_id], OBJ);
    }
    public void CickHome()
    {
        Application.LoadLevel("Menu");
        SoundControl.Instance.PlayClick();
        AdsManager.Instance.ShowFull();
    }
}
