using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RingManager : MonoBehaviour
{
    private int count;
    public TextMeshProUGUI timerText;
    private bool raceStarted = false;
    private float raceStartTime;

    // Update is called once per frame
    void Update()
    {
        if (raceStarted)
        {
            // Calculate elapsed time since race start
            float elapsedTime = Time.time - raceStartTime;
            Debug.Log(elapsedTime);

            // Format elapsed time into minutes, seconds, and milliseconds
            int minutes = Mathf.FloorToInt(elapsedTime / 60f);
            int seconds = Mathf.FloorToInt(elapsedTime % 60f);
            int milliseconds = Mathf.FloorToInt((elapsedTime * 1000f) % 1000f);

            // Update the text to display the race time
            timerText.text = string.Format("TIME TO COMPLETE\n{0:00}:{1:00}:{2:000}", minutes, seconds, milliseconds);
        }
    }

    public void Count(){
        count ++;
    }

    public int GetCount(){
        return count;
    }

    // Call this method to start the race timer
    public void StartRaceTimer()
    {
        raceStarted = true;
        raceStartTime = Time.time;
    }

    // Call this method to stop the race timer
    public void StopRaceTimer()
    {
        raceStarted = false;
    }
}
