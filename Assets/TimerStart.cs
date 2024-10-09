using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerStart : MonoBehaviour
{
    public RingManager Manager;
    private RingCollider colliderScript;

    // Update is called once per frame
    private void OnTriggerEnter()
    {
        //Manager.StartRaceTimer();
    }
}
