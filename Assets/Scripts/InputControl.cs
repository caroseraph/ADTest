using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputControl : MonoBehaviour
{
    // Start is called before the first frame update
 //   public bool isMoveNoZoom ;
    bool isClick = false;
    Vector2 oldPosTouch = Vector2.zero;
    Vector2 oldPosOB = Vector2.zero;
    float defaultzoom = 0f;
    float defaultScale = 1f;
    float tempScale = 1f;
    Vector3 defaultPos = Vector3.zero;
    Vector3 tempPos = Vector3.zero;
     Transform downPos, topPos;
    public float sizeX, sizeY;
    public Transform TopDefault;
    public Transform DownDefeult;
    void Start()
    {
        defaultScale = transform.localScale.x;
        defaultPos = transform.position;
        sizeX = GetComponent<BoxCollider2D>().size.x;
        sizeY = GetComponent<BoxCollider2D>().size.y;


        GameObject newTop = new GameObject();
        newTop.name = "topPos";
        newTop.transform.parent = transform;
        newTop.transform.position = new Vector3(defaultPos.x + defaultScale * sizeX / 2, defaultPos.y + defaultScale * sizeY / 2);
        topPos = newTop.transform;


        GameObject newDown = new GameObject();
        newDown.name = "downPos";
        newDown.transform.parent = transform;
        newDown.transform.position = new Vector3(defaultPos.x - defaultScale * sizeX / 2, defaultPos.y - defaultScale * sizeY / 2);
        downPos = newDown.transform;


    }
 

    // Update is called once per frame
    void Update()
    {

        if (isClick)
        {
            CheckDrag();
        }
        //checkzoom

        if (isClick && Input.touchCount >= 2)
        {

            ZoomGameOB();
        }
    }
    public void OnMouseDown()
    {
        isClick = true;
        oldPosTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        oldPosOB = transform.position;
        tempScale = transform.localScale.x;
        tempPos = Vector3.zero;
        // Debug.Log("OldPos:"+oldPos);
        //oldPos = transform.position;
    }
    public void OnMouseUp()
    {
        isClick = false;
        defaultzoom = 0;
        tempScale = transform.localScale.x;
    }
    //public void OnMouseDrag()
    //{
    //    Debug.Log("Mouse Drag");
    //}
    public void CheckDrag()
    {
        if (Input.GetMouseButton(0) && (Input.touchCount <= 1))
        {
            Vector2 newPosTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            Vector3 delta = oldPosOB + newPosTouch - oldPosTouch;

            transform.position = Vector3.MoveTowards(transform.position, delta, 15 * Time.deltaTime);
            
            checkPosition();
        }
    }
    public void ZoomGameOB()
    {
        if (Input.touchCount >= 2)
        {
            Touch touchOne = Input.GetTouch(0);
            Touch touchTwo = Input.GetTouch(1);
            Vector2 newZoom = Camera.main.ScreenToWorldPoint(touchOne.position) - Camera.main.ScreenToWorldPoint(touchTwo.position);
            if (defaultzoom == 0)
            {
                defaultzoom = newZoom.magnitude;
            }
            float tempmag = newZoom.magnitude - defaultzoom;
            limitScale(defaultScale, defaultScale*2f, tempmag);
            //if (tempPos == Vector3.zero)
            //{
            //    tempPos = (Camera.main.ScreenToWorldPoint(touchOne.position) + Camera.main.ScreenToWorldPoint(touchTwo.position)) / 2;
            //}

            //tempPos.x = (defaultPos.x - sizeX * transform.localScale.x);
            //tempPos.y = (defaultPos.y * 2 - tempPos.y);
            //tempPos.z = 0;
            //transform.position = Vector3.MoveTowards(transform.position, tempPos, 10 * Time.deltaTime);

            checkPosition();

        }
    }
    void limitScale(float _min, float _max, float _manitude)
    {
        float delta = _manitude / 5;
        float newScale =  tempScale + delta;
        if (newScale < _min)
        {
            newScale = _min;
        }
        else
             if (newScale > _max)
        {
            newScale = _max;
        }
        transform.localScale = new Vector2(newScale, newScale);


    }
    public void GetInforSize()
    {

    }

    public void checkPosition()
    {
        Vector3 tempPos = transform.position;
        //check Righ
        if (topPos.transform.position.x < TopDefault.transform.position.x)
        {
       
            
            tempPos.x = defaultPos.x - ((transform.localScale.x - defaultScale)*sizeX)/2;
         
        }
        //Check Left
        if (downPos.transform.position.x > DownDefeult.transform.position.x)
        {
        
            tempPos.x = defaultPos.x + ((transform.localScale.x - defaultScale) * sizeX) / 2;
      
        }

        //check Top
        if (topPos.transform.position.y < TopDefault.transform.position.y)
        {
   
            tempPos.y = defaultPos.y - ((transform.localScale.y - defaultScale) * sizeY) / 2;
         
        }
        //Check Down
        if (downPos.transform.position.y > DownDefeult.transform.position.y)
        {
         
            tempPos.y = defaultPos.y + ((transform.localScale.y - defaultScale) * sizeY) / 2;
        
        }
        transform.position = tempPos;


    }
    void checkisMOve()
    {

    }


}
