using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bubble2 : MonoBehaviour
{
    public SpriteRenderer imBroken;
    public GameObject imNormal;
    bool isBroken = false;
    public List<Sprite> ListBubbeBroken = new List<Sprite>();
    float timeBroken = 2f;

    // Start is called before the first frame update
    void Start()
    {
        
    }
    void RandomBroken()
    {
        int temp = Random.RandomRange(0,ListBubbeBroken.Count);
        imBroken.sprite = ListBubbeBroken[temp];
    }
    void CheckStatus()
    {
        if (isBroken == false)
        {
            RandomBroken();
            imBroken.gameObject.SetActive(true);
            imNormal.SetActive(false);
            isBroken = true;
            timeBroken = 2f;
            MapBubbleControl.Instance.ChangeScore();
            SoundControl.Instance.PlayHit();

        }
    }
    void ResetBubble()
    {
        isBroken = false;
        imBroken.gameObject.SetActive(false);
        imNormal.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        CheckNormal();
    }
    public void OnMouseEnter()
    {
        CheckStatus();  
    }
    void CheckNormal()
    {
        if (isBroken == true && timeBroken >0)
        {
            timeBroken -= Time.deltaTime;
            if (timeBroken <= 0)
            {
                ResetBubble();
            }
        }
    }
}
