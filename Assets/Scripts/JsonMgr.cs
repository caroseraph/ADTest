using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.Networking;
using System;
using Newtonsoft.Json;

/// <summary>
/// Json数据管理
/// 仅限数据的增删改查
/// </summary>
public class JsonMgr : Singleton<JsonMgr>
{
    /// <summary>
    /// 读取JSON数据
    /// </summary>
    public void LoadJson()
    {
        //加载Json
        TimeJsonLoad();
    }


    #region 时间Json文件

    TimeDataRecord m_timeRecord = new TimeDataRecord();
    private Dictionary<int, TimeShowValue> dicTime = new Dictionary<int, TimeShowValue>();


    /// <summary>
    /// 加载数据
    /// </summary>
    public void TimeJsonLoad()
    {
        if (dicTime.Keys.Count <= 0)
        {
            TextAsset text = Resources.Load<TextAsset>("level");
            string json = text.text;
            //Debug.Log(json);
            m_timeRecord = JsonConvert.DeserializeObject<TimeDataRecord>(json);
            for (int i = 0; i < m_timeRecord.m_listTime.Count; i++)
            {
                TimeValue time = m_timeRecord.m_listTime[i];
                TimeShowValue show = new TimeShowValue
                {
                    m_iId = time.id,
                    m_strName = time.name,
                    m_iNum = time.num,
                    m_listValues = StringToList(time.values)
                };

                //Debug.Log(show.m_listValues.Count);
                dicTime.Add(show.m_iId, show);
            }
        }
    }

    public int GetTimeValue(int type, int level)
    {
        int key = type + 1;
        Debug.Log(key+ "  level：" + level);
        if (dicTime.ContainsKey(key))
        {
            int index = level - 1;
            Debug.Log("countdown value: "+dicTime[key].m_listValues[index]);
            return dicTime[key].m_listValues[index];
        }
        return 30;
    }

    /// <summary>
    /// 字符串转为整型List
    /// </summary>
    public static List<int> StringToList(string strGetString)
    {
        if (!strGetString.Equals(string.Empty) && !strGetString.Equals("0"))
        {
            List<int> list = new List<int>();
            if (strGetString.Contains(","))
            {
                string[] strTmp = strGetString.Split(',');
                for (int i = 0; i < strTmp.Length; i++)
                {
                    list.Add(int.Parse(strTmp[i]));
                }
            }
            else
            {
                list.Add(int.Parse(strGetString));
            }
            return list;
        }
        return null;
    }

    #endregion


}

public class TimeDataRecord
{
    public List<TimeValue> m_listTime = new List<TimeValue>();
}

public class TimeValue
{
    public int id;
    public string name;
    public string values;
    public int num;
}

public class TimeShowValue
{
    public int m_iId;
    public string m_strName;
    public int m_iNum;
    public List<int> m_listValues = new List<int>();
}
