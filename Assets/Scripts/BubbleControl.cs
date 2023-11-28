using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening; 

public class BubbleControl : MonoBehaviour
{
    Color DefaultColor;
    public Color _color;
    public SpriteRenderer imConvex;
    public SpriteRenderer imConcave;
    public SpriteRenderer imBGR;
    public SpriteRenderer imFrame;
    public bool isConvex = true;
    bool isChangeStatus = true;
    // Start is called before the first frame update
    void Start()
    {
        //DefaultColor = Color.white;
        SetConvex(); 
    }
    public void SetColor(Color _cl)
    {
        _color = _cl;
        //imConvex.color = _color;
        //imConcave.color = _color;
        //imBGR.color = _color;
        //imFrame.color = _color;
    }
    public void SetConvex()
    {
        imConvex.gameObject.SetActive(true);
        imConcave.gameObject.SetActive(false);
        imFrame.gameObject.SetActive(true);

        //snap pixel

        //imConcave.gameObject.SetActive(false);
        //imConvex.gameObject.SetActive(false);
        //imFrame.gameObject.SetActive(false);

        isConvex = true;
    }
    public void SetConcave()
    {
        imConcave.gameObject.SetActive(false);
        imConvex.gameObject.SetActive(false);
        imFrame.gameObject.SetActive(false);

        imConvex.color = _color;
        imConcave.color = _color;
        imBGR.color = _color;
        isConvex = false;
        float tempS = imBGR.transform.localScale.x;
        Sequence mysequence = DOTween.Sequence();
        //mysequence.Append(imBGR.transform.DOScale(0f, 0.0f));
        //mysequence.Append(imBGR.transform.DOScale(0f, 0.2f));
        //mysequence.Append(imBGR.transform.DOScale(tempS, 0.2f));

        mysequence.Append(imBGR.DOFade(0f, 0.0f));
       // mysequence.Append(imBGR.DOFade(0f, 0.5f));
        mysequence.Append(imBGR.DOFade(1, 0.5f));
    }
    public void ChangeStatus()
    {
        //isConvex = !isConvex;
        if (isChangeStatus)
        {
            if (isConvex == false)
            {
                SetConvex();
            }
            else
            {
                SetConcave();
            }
            isChangeStatus = false;

            ReadDataImage.Instance.AddEFTouch(transform.position, _color);
            SoundControl.Instance.PlayHit();
        }
        ReadDataImage.Instance.CheckDone();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnMouseUp()
    {

    }

 

 void OnMouseDown()
    {
        ChangeStatus();
        
      
        
    }
}
