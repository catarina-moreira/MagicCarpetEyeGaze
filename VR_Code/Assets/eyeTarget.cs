using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;


public class eyeTarget : MonoBehaviour
{
    public EyeTrackingSphereCollision eyeTracking;
    public Transform cameraTransform;
     public KalmanFilterVector3 kalmanFilter = new KalmanFilterVector3();

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(transform.position + cameraTransform.rotation * Vector3.forward,
                         cameraTransform.rotation * Vector3.up);

        Vector3 position = eyeTracking.GetEyeTrackingRayPosition();
        Vector3 direction = eyeTracking.GetEyeTrackingRayDirection();
        transform.position = position + 10 * direction;
        transform.position = kalmanFilter.Update(transform.position);
    }
}