using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishTarget : MonoBehaviour
{
    public TargetManager Manager;
    public EventsData events;
    public DataCollector data;
    public AudioClip finishSound;
    private AudioSource targetAudio;

    public void Start()
    {
        targetAudio = GetComponent<AudioSource>();

        if (targetAudio == null)
        {
            // Add an AudioSource component if one is not already attached
            targetAudio = gameObject.AddComponent<AudioSource>();
        }
        if (targetAudio != null && finishSound != null)
        {
            targetAudio.clip = finishSound;
        }
    }

    // Update is called once per frame
    private void OnTriggerEnter()
    {
        Manager.StopTargetTimer();
        Manager.TargetCountStop();

        data.endRecord();
        events.endCsvRecord();

        data.endRecord();
        events.endCsvRecord();
        
        if (targetAudio != null && finishSound != null)
        {
            targetAudio.Play();
        }
    }
}
