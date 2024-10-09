using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerStop : MonoBehaviour
{
    public RingManager Manager;
    private RingCollider colliderScript;

    void Start(){
        colliderScript = GetComponent<RingCollider>();
    }

    // Update is called once per frame
    private void OnTriggerEnter()
    {
        Manager.StopRaceTimer();
        colliderScript.ActivateUI();
    }
}
