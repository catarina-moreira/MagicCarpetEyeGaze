using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;

public class EyeTrackingSphereCollision : MonoBehaviour
{
    public LayerMask collisionLayer; 
    public static Vector3 directionUpdate;
    public Shapes.Disc disc;
    public Shapes.Disc disc2;
    public Shapes.Line line;
    public Shapes.Line line2;
    private float timeSinceHit = 0.0f;
    private float colorChangeDelay = 0.5f;


    void Update()
    {
        Vector3 eyeTrackingRayDirection = GetEyeTrackingRayDirection();
        Vector3 eyeTrackingRayPosition = GetEyeTrackingRayPosition();
        RaycastHit hitInfo;

        Debug.DrawRay(eyeTrackingRayPosition, transform.TransformDirection(eyeTrackingRayDirection * 100), Color.green);

        if (Physics.Raycast(eyeTrackingRayPosition, eyeTrackingRayDirection, out hitInfo, Mathf.Infinity, collisionLayer))
        {
            if (hitInfo.collider.CompareTag("Target"))
            {
                timeSinceHit = 0.0f;

                if (!IsTargetGreen())
                {
                    SetTargetColor(Color.green);
                }
                directionUpdate = GetEyeTrackingRayDirection();
            }
            
        }
        else 
        {
            timeSinceHit += Time.deltaTime;

            if (timeSinceHit >= colorChangeDelay && IsTargetGreen())
            {
                SetTargetColor(Color.red);
            }
        }
    }

    private void SetTargetColor(Color color)
    {
        disc.Color = color;
        disc2.Color = color;
        line.Color = color;
        line2.Color = color;
    }

    private bool IsTargetGreen()
    {
        return disc.Color == Color.green;
    }

    public Vector3 GetEyeTrackingRayDirection()
    {
        var gazeRay = Tobii.XR.TobiiXR.GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace.World).GazeRay;
        return  gazeRay.Direction;
    }

    public Vector3 GetEyeTrackingRayPosition()
    {
        var gazeRay = Tobii.XR.TobiiXR.GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace.World).GazeRay;
        return  gazeRay.Origin;
    }

    public static Vector3 GetDirection(){
        return directionUpdate;
    }
}
