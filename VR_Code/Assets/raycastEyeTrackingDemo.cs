using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class raycastEyeTrackingDemo : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var gazeRay = Tobii.XR.TobiiXR.GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace.Local).GazeRay;
        Vector3 gazeDirection = gazeRay.Direction;
        Ray ray = new Ray(transform.position, transform.TransformDirection(gazeDirection * 10));
        Debug.DrawRay(transform.position, gazeDirection, Color.green);
    }
}
