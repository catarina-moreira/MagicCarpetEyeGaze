using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EyeTrackingProvider : MonoBehaviour
{
    public UnityEvent<Vector3> onEyeTrack;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var gazeRay = Tobii.XR.TobiiXR.GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace.Local).GazeRay;
        onEyeTrack.Invoke(transform.TransformPoint(gazeRay.Direction));
    }
}
