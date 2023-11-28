using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using ILRuntime.Runtime.Enviorment;
using System.Threading;

#pragma warning disable CS0618;
public class ILRuntimeStart : MonoBehaviour
{
    //ILRuntime入口
    AppDomain appDomain;

    System.IO.MemoryStream fs;
    System.IO.MemoryStream p;

    public int m_iSwitch;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadHotFixAssembly());
    }

    IEnumerator LoadHotFixAssembly() {
        appDomain = new ILRuntime.Runtime.Enviorment.AppDomain();
        //读取dll
#if UNITY_ANDROID
        WWW www = new WWW(Application.streamingAssetsPath + "/HotFix_Project.dll");
#else
        WWW www = new WWW("file:///" + Application.streamingAssetsPath + "/HotFix_Project.dll");
#endif
        while (!www.isDone)
        {
            yield return null;
        }
        if (!string.IsNullOrEmpty(www.error))
            Debug.LogError(www.error);
        byte[] dll = www.bytes;
        www.Dispose();
        //pdb文件，调试数据库，正式发布时去掉，LoadAssembly传null
//#if UNITY_ANDROID
//        www = new WWW(Application.streamingAssetsPath + "/HotFix_Project.pdb");
//#else
//        www = new WWW("file:///" + Application.streamingAssetsPath + "/HotFix_Project.pdb");
//#endif
//        while (!www.isDone)
//            yield return null;
//        if (!string.IsNullOrEmpty(www.error))
//            Debug.LogError(www.error);
//        byte[] pdb = www.bytes;
        fs = new MemoryStream(dll);
        //p = new MemoryStream(pdb);
        try
        {
            appDomain.LoadAssembly(fs, null, new ILRuntime.Mono.Cecil.Pdb.PdbReaderProvider());
        }
        catch
        {
            Debug.LogError("加载热更DLL失败，请确保已经通过VS打开Assets/Samples/ILRuntime/1.6/Demo/HotFix_Project/HotFix_Project.sln编译过热更DLL");
        }

        InitializeILRuntime();
        OnHotFixLoaded();
    }

    void InitializeILRuntime() {
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
        //由于Unity的Profiler接口只允许在主线程使用，为了避免出异常，需要告诉ILRuntime主线程的线程ID才能正确将函数运行耗时报告给Profiler
        appDomain.UnityMainThreadID = Thread.CurrentThread.ManagedThreadId;
#endif
        //这里做一些ILRuntime的注册，这个示例暂时没有需要注册的
    }

    void OnHotFixLoaded()
    {
        //方法调用
        //0游戏场景 1web场景
        appDomain.Invoke("HotFix_Project.InstanceClass", "RunTest1", null, m_iSwitch);

    }

    private void OnDestroy()
    {
        if (fs != null)
            fs.Close();
        if (p != null)
            p.Close();
        fs = null;
        p = null;
    }
}
