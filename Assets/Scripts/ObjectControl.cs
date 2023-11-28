using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class ObjectControl : MonoBehaviour

{
    public static ObjectControl Instance;
    public Transform ParentBubble;
    public List<BubbleControl> ListBubble = new List<BubbleControl>();
    public Color _myColor;
    public Sprite imItem;
    // Start is called before the first frame update
    private void Awake()
    {
        Instance = this;
    }
    void Start()
    {
        CheckListBubble();
        SetColorAllBubble();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void CheckListBubble()
    {
        for (int i = 0; i < ParentBubble.childCount; i++)
        {
            BubbleControl _scripts = ParentBubble.GetChild(i).GetComponent<BubbleControl>();
            ListBubble.Add(_scripts);
        }
    }
    void SetColorAllBubble()
    {
        for (int i = 0; i < ListBubble.Count; i++)
        {
            ListBubble[i].SetColor(_myColor);
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
        Debug.Log("CheckPop:" + isCheck);
        if (isCheck)

        {
            Debug.Log("Set Scale");
            Sequence mysequence = DOTween.Sequence();
            mysequence.Append(this.transform.DOScale(1.1f, 0.2f));
       
            mysequence.Append(this.transform.DOScale(1f, 0.2f)).OnComplete(ResetBubble);
            //ResetBubble();
        }
    }
    public void ResetBubble()
    {
        for (int i = 0; i < ListBubble.Count; i++)
        {
            ListBubble[i].SetConvex();
        }
    }
    
}
