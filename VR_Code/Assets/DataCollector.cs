using UnityEngine;
using System;
using System.IO;

public class DataCollector : MonoBehaviour
{
    public TargetManager TManager;
    public RingManager RManager;
    public CircleSpeedController speedController;
    public Transform circleTransform;
    public Transform headsetTransform;
    public Transform rightControllerTransform;
    public Transform leftControllerTransform; 

    private StreamWriter csvWriter;
    private float startTime;
    private bool record = false;
    private string type;
    private string technique;

    public void createCsvStart()
    {
        if(getType() != null)
        {
            startTime = Time.time;
            // Open a new CSV file for writing
            string timestamp = DateTime.Now.ToString("ddMMyyyy_HHmmss");
            string fileName = "DataCollector_" + getType() + "_" + getTechnique() + "_" + timestamp + ".csv";

            // Combine the file name with the persistent data path
            string filePath = Path.Combine(Application.persistentDataPath, fileName);
            
            csvWriter = new StreamWriter(filePath);

            // Write header to CSV file
            csvWriter.WriteLine("Frame_ID,Frame_Time," +
                                "Circle_X,Circle_Y,Circle_Z,Circle_Forward_X,Circle_Forward_Y,Circle_Forward_Z," + 
                                "Headset_X,Headset_Y,Headset_Z,Headset_Forward_X,Headset_Forward_Y,Headset_Forward_Z," +
                                "Controller_R_X,Controller_R_Y,Controller_R_Z,Controller_R_Forward_X,Controller_R_Forward_Y,Controller_R_Forward_Z," +
                                "Controller_L_X,Controller_L_Y,Controller_L_Z,Controller_L_Forward_X,Controller_L_Forward_Y,Controller_L_Forward_Z," +
                                "Gaze_X,Gaze_Y,Gaze_Z,Velocity_Circle,Velocity_Joystick,Distance_Center");

            if(getType() == "Rings")
            {
                RManager.StartRaceTimer();
            } 
            else if(getType() == "Targets")
            {
                TManager.StartTargetTimer();
            }
        }
    }

    void Update()
    {
        if(record && getType() != null)
        {
            float frameCount = Time.frameCount;
            float time = Time.time - startTime;

            TimeSpan timeSpan = TimeSpan.FromSeconds(time);
            string formattedTime = string.Format("{0:00}:{1:00}:{2:00}:{3:000}", timeSpan.Hours, timeSpan.Minutes, timeSpan.Seconds, timeSpan.Milliseconds);

            // Record VR headset and controller positions every frame
            Vector3 circlePosition = circleTransform.position;
            Vector3 headsetPosition = headsetTransform.position;
            Vector3 rightControllerPosition = rightControllerTransform.position;
            Vector3 leftControllerPosition = leftControllerTransform.position;

            var gazeRay = Tobii.XR.TobiiXR.GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace.World).GazeRay;
            Vector3 gazeRayForward = gazeRay.Direction;

            Vector3 circleForward = circleTransform.forward;
            Vector3 headsetForward = headsetTransform.forward;
            Vector3 rightControllerForward = rightControllerTransform.forward;
            Vector3 leftControllerForward = leftControllerTransform.forward;
            float velocity_Circle = speedController.getVelocityCircle();
            float velocity_Joystick = speedController.getVelocityJoystick();
            float distance_center = speedController.getDistFromCircleCenter();

            // Write positions to CSV file with frame number
            csvWriter.WriteLine(frameCount + "," + formattedTime + "," +
                                circlePosition.x + "," + circlePosition.y + "," + circlePosition.z + "," +
                                circleForward.x + "," + circleForward.y + "," + circleForward.z + "," +
                                headsetPosition.x + "," + headsetPosition.y + "," + headsetPosition.z + "," +
                                headsetForward.x + "," + headsetForward.y + "," + headsetForward.z + "," +
                                rightControllerPosition.x + "," + rightControllerPosition.y + "," + rightControllerPosition.z + "," +
                                rightControllerForward.x + "," + rightControllerForward.y + "," + rightControllerForward.z + "," +
                                leftControllerPosition.x + "," + leftControllerPosition.y + "," + leftControllerPosition.z + "," +
                                leftControllerForward.x + "," + leftControllerForward.y + "," + leftControllerForward.z + "," +
                                gazeRayForward.x + "," + gazeRayForward.y + "," + gazeRayForward.z + "," +
                                velocity_Circle + "," + velocity_Joystick + "," + distance_center);
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