using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class CircleSpeedController : MonoBehaviour
{
    public EyeTrackingSphereCollision eyeTrackingDir;

    [Range(0f, 25f)]
    public float speed = 25f;

    [Range(0f, 10f)]
    public float speedJoystick = 10f;
    public Transform cameraTransform;
    public Transform carpetTransform;
    public Transform circleTransform;
    private InputData _inputData;
    public Vector3 velocityCircle;
    public Vector2 velocityJoystick;
    public Vector3 dist;
    private UIManager _uiValues;

    private void Start()
    {
        _inputData = GetComponent<InputData>();
        _uiValues = GetComponent<UIManager>();
        velocityCircle = UpdateSpeed();

    }

    float map(float s, float a1, float a2, float b1, float b2)
    {
        return b1 + (s - a1) * (b2 - b1) / (a2 - a1);
    }

    Vector3 UpdateSpeed()
    {
        dist = circleTransform.InverseTransformPoint(cameraTransform.position);
        dist.x = 0;
        dist.y = 0;

        float magnitude = dist.magnitude;
        float minMagnitude = 0.1f;
        Vector3 minVector = Vector3.ClampMagnitude(dist, minMagnitude);
        float maxMagnitude = 0.4f;
        Vector3 maxVector = Vector3.ClampMagnitude(dist, maxMagnitude);

        if (magnitude < minMagnitude)
            return Vector3.zero;
        if (magnitude > maxMagnitude)
            return maxVector * (speed * Time.deltaTime);
        else
        {
            float diffMagnitude = maxVector.magnitude - minVector.magnitude;
            float remappedMagnitude = map(diffMagnitude, 0, maxMagnitude - minMagnitude, 0, maxMagnitude);
            return Vector3.ClampMagnitude(dist, remappedMagnitude) * (speed * Time.deltaTime);
        }
    }

   Vector2 UpdateSpeedJoystick()
   {
        if (_inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxis, out Vector2 rightJoystick))
        {
            return rightJoystick * (speedJoystick * Time.deltaTime);
        }

        return new Vector2(0, 0); // Return a default value if the feature value is not found
    }

    void Update()
    {
        if (eyeTrackingDir != null)
        {
            Vector3 dir = EyeTrackingSphereCollision.GetDirection();


            // JOYSTICK MOVEMENT
            if(_uiValues.isJoystickActive()){

                velocityJoystick = UpdateSpeedJoystick();
                Vector3 newPosition = carpetTransform.position;

                if (velocityJoystick.y >= 0)
                {
                    newPosition += dir * velocityJoystick.magnitude;
                }
                else if (velocityJoystick.y < 0)
                {
                    Vector3 inverseDir = -dir;
                    newPosition += inverseDir * velocityJoystick.magnitude;
                }


                // Check if the new position would cross the y < 0 barrier
                if (newPosition.y < 0)
                {
                    // Clamp the y-value to keep it above the barrier
                    newPosition.y = 0;
                }


                // Update the carpetTransform position
                carpetTransform.position = newPosition;
            }


            // SPEED CIRCLE MOVEMENT
            if(_uiValues.isSpeedCircleActive())
            {
                _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.gripButton, out bool grip);

                if (!grip)
                {
                    velocityCircle = UpdateSpeed();
                }
                Vector3 newPosition = carpetTransform.position;

                
                if (velocityCircle.z >= 0)
                {
                    newPosition += dir * velocityCircle.magnitude;
                }
                else if (velocityCircle.z < 0)
                {
                    Vector3 inverseDir = -dir;
                    newPosition += inverseDir * velocityCircle.magnitude;
                }

                // Check if the new position would cross the y < 0 barrier
                if (newPosition.y < 0)
                {
                    // Clamp the y-value to keep it above the barrier
                    newPosition.y = 0;
                }


                // Update the carpetTransform position
                carpetTransform.position = newPosition;
            }

            
            // LOCK DIRECTION WITH EYETRACKING
            Vector3 eyeForward = dir;

            eyeForward.y = 0;

            if (eyeForward != Vector3.zero)
            {
                Quaternion targetRotation = Quaternion.LookRotation(eyeForward);
                circleTransform.rotation = targetRotation;
            }
        } else
        {
            Debug.LogWarning("EyeTrackingDir is not assigned.");
        }
    }

    public float getVelocityCircle(){
        return velocityCircle.magnitude;
    }

    public float getVelocityJoystick(){
        return velocityJoystick.magnitude;
    }

    public float getDistFromCircleCenter(){
        return dist.magnitude;
    }
}
