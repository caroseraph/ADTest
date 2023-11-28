using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ItemObject : MonoBehaviour
{
    public Button btClick;
    public Image imObject;
    int _idItem;
    // Start is called before the first frame update
    void Start()
    {
        btClick.onClick.AddListener(ClickItemOBJ);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetImageObject(int _id,Sprite _sp)
    {
        _idItem = _id;
        imObject.sprite = _sp;
    }
    public void ClickItemOBJ()
    {
        GameControl.Instance.AddObject(_idItem);
        SoundControl.Instance.PlayClick();
        AdsManager.Instance.ShowFull();
    }
}
