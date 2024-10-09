using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class TestSelector : MonoBehaviour
{
    // Reference to the objects you want to toggle
    public GameObject[] objectsToToggle;

    // Called when the button is clicked
    public void OnButtonClick()
    {
        // Toggle the visibility of each object
        foreach (GameObject obj in objectsToToggle)
        {
            obj.SetActive(!obj.activeSelf);
        }
    }
}

