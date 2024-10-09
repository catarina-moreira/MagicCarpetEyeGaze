using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using Unity.XR.PXR;
using UnityEngine.InputSystem;


public class targetController : MonoBehaviour
{
    public Transform hand;
    public GameObject HandRenderer;
    public Renderer ControllerRenderer;
    public Transform controller;
    public Transform cameraTransform;
    public GameObject target;
    private InputData _inputData;
    public PXR_Hand pxr_hand;
    public KalmanFilterVector3 kalmanFilter = new KalmanFilterVector3();


    void Start()
    {
        _inputData = GetComponent<InputData>();
    }

    // Update is called once per frame
    void Update()
    {
        _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.triggerButton, out bool trigger);
        
        if(hand.gameObject.activeInHierarchy)
        {
            foreach (Renderer childRenderer in HandRenderer.GetComponentsInChildren<Renderer>())
            {
                childRenderer.enabled = true;
            }

            ControllerRenderer.enabled = false;

            target.SetActive(hand.gameObject.activeInHierarchy);
            target.transform.LookAt(target.transform.position + cameraTransform.rotation * Vector3.forward,
                            cameraTransform.rotation * Vector3.up);
            //target.transform.position = (hand.transform.position + 10 * hand.transform.forward);
            
            var fingerTransform = pxr_hand.handJoints[(int)HandJoint.JointIndexProximal];
            target.transform.position = (fingerTransform.position + 10 * fingerTransform.forward);
            target.transform.position = kalmanFilter.Update(target.transform.position);
        }
        else
        {
            foreach (Renderer childRenderer in HandRenderer.GetComponentsInChildren<Renderer>())
            {
                childRenderer.enabled = false;
            }

            ControllerRenderer.enabled = true;

            if(trigger){
                target.SetActive(controller.gameObject.activeInHierarchy);
                target.transform.LookAt(target.transform.position + cameraTransform.rotation * Vector3.forward,
                                cameraTransform.rotation * Vector3.up);
                target.transform.position = (controller.transform.position + 10 * controller.transform.forward);
            }
            else
            {
                target.SetActive(false);
            }
        }
    }
}