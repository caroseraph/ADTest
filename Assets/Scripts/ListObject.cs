using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListObject : MonoBehaviour
{
    public static ListObject Instance;
    private void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    public List<Sprite> ListSpriteAnimal = new List<Sprite>();
    public List<Sprite> ListSpriteFruit = new List<Sprite>();
    public List<Sprite> ListSpriteHeroes = new List<Sprite>();
    public List<Sprite> ListSpriteRegions = new List<Sprite>();
    public List<Sprite> ListSpriteEmoji = new List<Sprite>();

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
