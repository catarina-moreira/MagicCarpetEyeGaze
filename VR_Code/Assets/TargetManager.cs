using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TargetManager : MonoBehaviour
{
    private int count;
    public TextMeshProUGUI timerText;
    public TextMeshProUGUI targetText;
    public GameObject uiTarget;
    private bool targetStarted = false;
    private float targetStartTime;
    private bool countStop = false;

    // Update is called once per frame
    void Update()
    {
        if (targetStarted)
        {
            // Calculate elapsed time since target start
            float elapsedTime = Time.time - targetStartTime;
            Debug.Log(elapsedTime);

            // Format elapsed time into minutes, seconds, and milliseconds
            int minutes = Mathf.FloorToInt(elapsedTime / 60f);
            int seconds = Mathf.FloorToInt(elapsedTime % 60f);
            int milliseconds = Mathf.FloorToInt((elapsedTime * 1000f) % 1000f);

            // Update the text to display the target time
            timerText.text = string.Format("TIME TO COMPLETE\n{0:00}:{1:00}:{2:000}", minutes, seconds, milliseconds);
        }

        if(countStop){
            targetText.text = "TOTAL TARGETS\n" + GetCount() + " of 30";
            ActivateUI();
        }
    }

    public void Count(){
        count ++;
    }

    public int GetCount(){
        return count;
    }

    // Call this method to start the target timer
    public void StartTargetTimer()
    {
        targetStarted = true;
        targetStartTime = Time.time;
    }

    // Call this method to stop the target timer
    public void StopTargetTimer()
    {
        targetStarted = false;
    }

    public void TargetCountStop(){
        countStop = true;
    }

     public void ActivateUI()
    {
        // Activate the UI panel
        uiTarget.SetActive(true);
    }
}
