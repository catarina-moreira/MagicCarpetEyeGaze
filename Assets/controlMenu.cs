using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class controlMenu : MonoBehaviour
{
    private InputData _inputData;
    public DataCollector _recordData;
    public EventsData _recordEvents;
    
    // Start is called before the first frame update
    void Start()
    {
        _inputData = GetComponent<InputData>();
    }

    // Update is called once per frame
    void Update()
    {
        _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bool buttonRight);
        _inputData._leftController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bool buttonLeft);

        if(buttonRight && buttonLeft){
                if(_recordData.getRecord() || _recordEvents.getRecord())
                {
                    _recordData.startRecord();
                    _recordEvents.startRecord();
                }
                SceneManager.LoadScene("TapeteMagico");
        }
        
    }
}
