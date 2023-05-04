using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DebugTextBox : MonoBehaviour
{
    public TextMeshProUGUI debugText;

    void Start()
    {
        Application.logMessageReceived += HandleLog;
    }

    void HandleLog(string logString, string stackTrace, LogType type)
    {
        if (type == LogType.Error || type == LogType.Exception)
        {
            debugText.text =  logString  + "\n" + debugText.text;
        }
    }
}
