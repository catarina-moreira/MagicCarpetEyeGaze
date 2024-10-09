using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyeTrackingController : MonoBehaviour
{
    public Transform carpetTransform;
    public float speed = 1.0f;

    public void onEyeTracking(Vector3 eyeDir)
    {
        Vector3 flatForward = carpetTransform.forward;
        Vector3 flatEyeDir = eyeDir;
        flatForward.y = 0;
        flatEyeDir.y = 0;

        Vector3 LerpedForward = Vector3.Lerp(flatForward, flatEyeDir, Time.deltaTime * speed);

        carpetTransform.forward = LerpedForward;
    }

}
