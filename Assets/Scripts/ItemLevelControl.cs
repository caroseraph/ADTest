using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class ItemLevelControl : MonoBehaviour
{
    public Image imItem;
   public int idType = 0;
 public   int idLevel =0;
    public Text txtLevel;
    public GameObject imLock;
    public Button btItem;
    bool isLock = true;
    // Start is called before the first frame update
    void Start()
    {
        btItem.onClick.AddListener(ClickItem);
    }


    public void SetInfor(Sprite _newSprite,int _type,int _level,int _Lock)
    {
        imItem.sprite = _newSprite;
        idLevel = _level;
        idType = _type;
        txtLevel.text = "" + idLevel;
        if (idLevel <= _Lock)
        {
            imLock.SetActive(false);
            isLock = false;
        }
        else
        {
            imLock.SetActive(true);
            isLock = true;
        }
    }
    void ClickItem()
    {
        if (isLock)
        {
            Debug.Log("Set Scale");
            Sequence mysequence = DOTween.Sequence();
            mysequence.Append(imLock.transform.DOScale(0f, 0.2f));
            mysequence.Append(imLock.transform.DOScale(0f, 0.2f));

            mysequence.Append(imLock.transform.DOScale(1f, 0.2f));
            //ResetBubble();
        }
        else
        {
            InforData _infor = new InforData();
            _infor.idType = idType;
            _infor.idLevel = idLevel;
            string temp = JsonUtility.ToJson(_infor);
            PlayerPrefs.SetString(KeySave.DataPlay, temp);
            PlayerPrefs.Save();
            SceneManager.LoadScene(3);
        }
        SoundControl.Instance.PlayClick();
    }
}
