using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EFSmoke : MonoBehaviour
{
    // Start is called before the first frame update
    public ParticleSystem EF1;
    public ParticleSystem EF2;
    void Start()
    {
        Destroy(this.gameObject, 1f);
    }
    public void SetValues(Color _color)
    {
        EF1.startColor = _color;
        EF2.startColor = _color;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
