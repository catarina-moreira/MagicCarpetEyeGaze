using UnityEngine;
using System;
using System.IO;

public class EventsData : MonoBehaviour
{
    public TargetManager TManager;
    public RingManager RManager;
    public InputData _inputData;
    private StreamWriter csvWriter;
    private float startTime;
    private float frameCount;
    private bool record = false;
    private string type;
    private string technique;
    private int collisionCounter;
    private string formattedTime;

    public void createCsvStart()
    {
        if(getType() != null)
        {
            startTime = Time.time;
            collisionCounter = 0;
            // Open a new CSV file for writing
            string timestamp = DateTime.Now.ToString("ddMMyyyy_HHmmss");
            string fileName = "EventsData_" + "_" + getType() + "_" + getTechnique() + "_" + timestamp + ".csv";

            // Combine the file name with the persistent data path
            string filePath = Path.Combine(Application.persistentDataPath, fileName);

            // Open a new CSV file for writing
            csvWriter = new StreamWriter(filePath);

            // Write header to CSV file
            csvWriter.WriteLine("Frame_ID,Event,Data");
            frameCount = Time.frameCount;
            csvWriter.WriteLine(frameCount + "," + "Start");

        }
    }

    void Update()
    {
        if(record && getType() != null)
        {
            frameCount = Time.frameCount;
            float time = Time.time - startTime;

            TimeSpan timeSpan = TimeSpan.FromSeconds(time);
            formattedTime = string.Format("{0:00}:{1:00}:{2:00}:{3:000}", timeSpan.Hours, timeSpan.Minutes, timeSpan.Seconds, timeSpan.Milliseconds);

            _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bool buttonRight);
            _inputData._leftController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bool buttonLeft);
            _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.triggerButton, out bool triggerRight);
            _inputData._leftController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.triggerButton, out bool triggerLeft);
            _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.gripButton, out bool grip);

           

            if(buttonRight){
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Right Button A");
            }
            if(buttonLeft){
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Left Button A");
            }
            if(triggerRight){
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Right Trigger");
            }
            if(triggerLeft){
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Left Trigger");
            }
            if(grip)
            {
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Right Grip");
            }
            if (_inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxis, out Vector2 rightJoystick))
            {
                csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Right Joystick");
            }
        }
    }

    public void ringData(int id)
    {
        if(record)
        {
            float frameCount = Time.frameCount;
            csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Ring" + "," + id);
        }
    }

    public void targetData(int id)
    {
        if(record)
        {
            float frameCount = Time.frameCount;
            csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Target" + "," + id);
        }
    }

    public void collisionData()
    {
        if(record)
        {
            float frameCount = Time.frameCount;
            collisionCounter ++;
            csvWriter.WriteLine(frameCount + "," + formattedTime + "," + "Collision" + "," + collisionCounter);
        }
    }

    public void startRecord()
    {
        record = true;
    }
    
    public void endRecord()
    {
        record = false;
    }

    public bool getRecord(){
        return record;
    }

    public void endCsvRecord()
    {
        // Close the CSV file when the script is destroyed
        if (csvWriter != null)
        {
            csvWriter.Close();
        }
    }

    public string getTechnique()
    {
        return technique;
    }

    public void setTechniqueSpeedCircle()
    {
        technique = "speedCircle";
    }

    public void setTechniqueJoystick()
    {
        technique = "joystick";
    }

    public string getType()
    {
        return type;
    }

    public void setTypeRings()
    {
        type = "Rings";
    }

    public void setTypeTargets()
    {
        type = "Targets";
    }
}
