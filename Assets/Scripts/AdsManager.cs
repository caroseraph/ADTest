using UnityEngine;
using System.Collections;

using System;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using UnityEngine.SceneManagement;

public enum typeADS{ Admob,Unity}

public class AdsManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{
    //	public GameObject PanelCheckVersion;
    //  public int numLevelShow = 0;
    private bool testMode = true;
    private bool showBanner = false;

    [SerializeField] private BannerPosition bannerPosition = BannerPosition.BOTTOM_CENTER;

    public delegate void DebugEvent(string msg);
    public static event DebugEvent OnDebugLog;

    int _numBonues;

    private const string REWARDED_VIDEO_PLACEMENT = "Rewarded_Android";
    private const string VIDEO_PLACEMENT = "Interstitial_Android";
    private const string BANNER_PLACEMENT = "Banner_Android";
    //  string gameId = "";
#if UNITY_IOS
     private string gameId = "5481038";
#elif UNITY_ANDROID
    private string gameId = "5481039";
#endif
    System.Collections.Generic.Dictionary<string, object> tempdic;


#if UNITY_ANDROID
    string appId = "ca-app-pub-3940256099942544~3347511713";
    string adUnitId = "ca-app-pub-3940256099942544/1033173712";
    string adUnitIdRw = "ca-app-pub-3940256099942544/5224354917";
    string adBaner = "ca-app-pub-3940256099942544/6300978111";
#elif UNITY_IPHONE
            string appId = "ca-app-pub-3940256099942544~1458002511";
       string adUnitId = "ca-app-pub-3940256099942544/4411468910";
   string adUnitIdRw = "ca-app-pub-3940256099942544/1712485313";
    string adBaner = "ca-app-pub-3940256099942544/2934735716";
#else
            string appId = "unexpected_platform";
      string adUnitId = "unexpected_platform";
      string adUnitIdRw = "unexpected_platform";
    string adBaner = "unexpected_platform";
#endif





    private static AdsManager instance;
    public static AdsManager Instance
    {
        get
        {
            return instance;
        }
    }

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

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        StartCoroutine(Delaytime());
    }


    IEnumerator Delaytime()
    {
        yield return new WaitForSeconds(0.5f);
        {
            InitUnity();
            // ShowBaner();
        }
    }

    private void InitUnity()
    {
        if (Advertisement.isSupported)
        {
            DebugLog(Application.platform + " supported by Advertisement");
        }
        Advertisement.Initialize(gameId, testMode, this);
        //Advertisement.Initialize(gameId, false);
        LoadRewardedAd();
        LoadNonRewardedAd();
    }


    #region Interface Implementations
    public void OnInitializationComplete()
    {
        DebugLog("Init Success");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        DebugLog($"Init Failed: [{error}]: {message}");
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        DebugLog($"Load Success: {placementId}");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        DebugLog($"Load Failed: [{error}:{placementId}] {message}");
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        DebugLog($"OnUnityAdsShowFailure: [{error}]: {message}");
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        DebugLog($"OnUnityAdsShowStart: {placementId}");
    }

    public void OnUnityAdsShowClick(string placementId)
    {
        DebugLog($"OnUnityAdsShowClick: {placementId}");
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        LoadRewardedAd();
        SceneManager.LoadScene(3);
        DebugLog($"OnUnityAdsShowComplete: [{showCompletionState}]: {placementId}");
    }
    #endregion

    void DebugLog(string msg)
    {
        OnDebugLog?.Invoke(msg);
        Debug.Log(msg);
    }

    public void ShowRewardVideo()
    {
        Debug.Log("ShowReward Videos unity");
        ShowUnityAdsReward();
        //InitUnity();
    }
    public void ShowFull()
    {
        Debug.Log("ShowFull  unity");
        ShowNonRewardedAd();
        //InitUnity();
    }

    public void ToggleBanner()
    {
        showBanner = !showBanner;

        if (showBanner)
        {
            Advertisement.Banner.SetPosition(bannerPosition);
            Advertisement.Banner.Show(BANNER_PLACEMENT);
        }
        else
        {
            Advertisement.Banner.Hide(false);
        }
    }


    public void LoadRewardedAd()
    {
        Advertisement.Load(REWARDED_VIDEO_PLACEMENT, this);
    }

    void ShowUnityAdsReward()
    {
        Advertisement.Show(REWARDED_VIDEO_PLACEMENT, this);
    }

    public void LoadNonRewardedAd()
    {
        Advertisement.Load(VIDEO_PLACEMENT, this);
    }
    public void ShowNonRewardedAd()
    {
        Advertisement.Show(VIDEO_PLACEMENT, this);
    }


}


