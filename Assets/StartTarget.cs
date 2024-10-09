using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartTarget : MonoBehaviour
{
    public TargetManager Manager;
    public EventsData events;
    public DataCollector data;

    // Update is called once per frame
    private void OnTriggerEnter()
    {
        //Manager.StartTargetTimer();

        // data.createCsvStart("Targets");
        // events.createCsvStart("Targets");

        // data.startRecord();
        // events.startRecord();
    }
}
