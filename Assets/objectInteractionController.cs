using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using Unity.XR.PXR;

public class objectInteractionController : MonoBehaviour
{
    private InputData _inputData;
    public List<GameObject> interactables;
    public AudioClip interactableDestroyAudio;
    public Transform cameraTransform;
    public Transform controller;
    public LayerMask collisionLayer; 
    public EyeTrackingSphereCollision eyeTracking;
    public TargetManager Manager;
    public EventsData events;
    private AudioSource interactableAudio;

    void Start()
    {
        _inputData = GetComponent<InputData>();

        interactableAudio = GetComponent<AudioSource>();

        // Ensure AudioSource component is set up
        if (interactableAudio == null)
        {
            // Add an AudioSource component if one is not already attached
            interactableAudio = gameObject.AddComponent<AudioSource>();
        }

        // Assign the audio clip to the AudioSource component
        if (interactableAudio != null && interactableDestroyAudio != null)
        {
            interactableAudio.clip = interactableDestroyAudio;
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 eyeTrackingRayDirection = eyeTracking.GetEyeTrackingRayDirection();
        Vector3 eyeTrackingRayPosition = eyeTracking.GetEyeTrackingRayPosition();
        RaycastHit hitInfo;

        _inputData._leftController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.triggerButton, out bool pressed);

        Debug.DrawRay(eyeTrackingRayPosition, transform.TransformDirection(eyeTrackingRayDirection * 100), Color.green);

        GameObject selectedInteractable = null; // Variable to store the selected interactable

        // Check if the ray hits anything in the collision layer
        if (Physics.Raycast(eyeTrackingRayPosition, eyeTrackingRayDirection, out hitInfo, Mathf.Infinity, collisionLayer))
        {
            // Iterate through interactables
            foreach (var interactable in interactables)
            {
                Renderer interactableRender = interactable.GetComponent<Renderer>();

                if (hitInfo.collider.gameObject.layer == LayerMask.NameToLayer("Interactable") && hitInfo.collider.gameObject == interactable && pressed)
                {
                        Manager.Count();
                        interactable interactableScript = interactable.GetComponent<interactable>();
                        events.targetData(interactableScript.getId());
                        
                        if (interactableAudio != null && interactableDestroyAudio != null)
                        {
                            interactableAudio.Play();
                        }
                        
                        
                        // Disable the renderer and collider instead of destroying the GameObject
                        interactableRender.enabled = false;
                        interactable.GetComponent<Collider>().enabled = false;

                        selectedInteractable = interactable; // Store the selected interactable
                        Destroy(interactable);
                
                }
            }
        }

        // Set the color to red for non-selected interactables outside the loop
        foreach (var interactable in interactables)
        {
            Renderer interactableRender = interactable.GetComponent<Renderer>();

            // Set color to red for non-selected interactables
            if (interactable != selectedInteractable)
            {
                interactableRender.material.color = Color.red;
            }
        }

        // Remove the interactable from the list after the loop
        if (selectedInteractable != null)
        {
            interactables.Remove(selectedInteractable);
        }
    }
}
