using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundControl : MonoBehaviour
{
    private static SoundControl instance;
    public static SoundControl Instance {
        get {
            return instance;
        }
    }
  //  [HideInInspector]
    public AudioSource Aud;
    public AudioClip Aud_Click;
    public AudioClip Aud_Hit;
    public AudioClip Aud_BGR;
     int isSound = 0;
     int isMusic = 0;
    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        //Aud = GetComponent<AudioSource>();
        isSound = PlayerPrefs.GetInt(KeySave.idSound,0);
        isMusic = PlayerPrefs.GetInt(KeySave.idMusic, 0);
        //if (isMusic == 0)
        //{
        //    Aud.Play();
        //}

    }

    public void PlayClick()
    {
        if (isSound == 0)
        {
            Aud.PlayOneShot(Aud_Click);
        }
    }
    public void PlayHit()
    {
        if (isSound == 0)
        {
            Aud.PlayOneShot(Aud_Hit);
        }
    }
  
  
    public void ChecknewSetting()
    {
        isMusic = PlayerPrefs.GetInt(KeySave.idMusic, 0);
        if (isMusic != 0)
        {
            Aud.Stop();
        }
        else {

            Aud.Play();
        }
    }
    public void PlayOther(AudioClip _other)
    {
        Aud.Stop();
        Aud.PlayOneShot(_other);
    }
    public void PlayShootAK()
    {
        //Aud.Stop();
        //Aud.PlayOneShot(Aud_ShootAK);
    }
    public void StopAll() { Aud.Stop(); }
    private void OnApplicationFocus(bool focus)
    {
        if (focus == false)
        {
            //if user left your app schedule all your notifications
            GleyNotifications.SendNotification("Hey!", "Are you free ? Play games with us!!", new System.TimeSpan(0, 1, 0), null, null, "");
        }
        else
        {
            //call initialize when user returns to your app to cancel all pending notifications
            GleyNotifications.Initialize();
        }
    }

}
