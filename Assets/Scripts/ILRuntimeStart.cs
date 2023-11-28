using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using ILRuntime.Runtime.Enviorment;
using System.Threading;

#pragma warning disable CS0618;
public class ILRuntimeStart : MonoBehaviour
{
    //ILRuntime���
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
        //��ȡdll
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
        //pdb�ļ����������ݿ⣬��ʽ����ʱȥ����LoadAssembly��null
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
            Debug.LogError("�����ȸ�DLLʧ�ܣ���ȷ���Ѿ�ͨ��VS��Assets/Samples/ILRuntime/1.6/Demo/HotFix_Project/HotFix_Project.sln������ȸ�DLL");
        }

        InitializeILRuntime();
        OnHotFixLoaded();
    }

    void InitializeILRuntime() {
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
        //����Unity��Profiler�ӿ�ֻ���������߳�ʹ�ã�Ϊ�˱�����쳣����Ҫ����ILRuntime���̵߳��߳�ID������ȷ���������к�ʱ�����Profiler
        appDomain.UnityMainThreadID = Thread.CurrentThread.ManagedThreadId;
#endif
        //������һЩILRuntime��ע�ᣬ���ʾ����ʱû����Ҫע���
    }

    void OnHotFixLoaded()
    {
        //��������
        //0��Ϸ���� 1web����
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
