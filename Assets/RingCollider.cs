using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class RingCollider : MonoBehaviour
{
    public int id;
    public RingManager Manager;
    public EventsData events;
    public DataCollector data;
    public AudioClip ringPassSound;
    private AudioSource audioSource;
    public TextMeshProUGUI text;
    public GameObject uiPanel; // Reference to the UI panel to activate
    private Text ringCountText; // Reference to the text element to display the total ring count
    private HashSet<GameObject> collidedRings = new HashSet<GameObject>(); // Collection to store collided rings
    private int totalRingCount;
    private int count;

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();

        // Ensure AudioSource component is set up
        if (audioSource == null)
        {
            // Add an AudioSource component if one is not already attached
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.volume = 0.5f;
        }

        // Assign the audio clip to the AudioSource component
        if (audioSource != null && ringPassSound != null)
        {
            audioSource.clip = ringPassSound;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // Check if the collider belongs to the player
        if (other.CompareTag("Player"))
        {
            // if(id == 1)
            // {
            //     // data.createCsvStart("Rings");
            //     // data.startRecord();

            //     // events.createCsvStart("Rings");
            //     // events.startRecord();    
            // }
    
            events.ringData(id);

            if(id == 34)
            {
                data.endRecord();
                data.endCsvRecord();

                events.endRecord();
                events.endCsvRecord();
            }
            
            // Play the audio clip when the player passes through the ring
            if (audioSource != null && ringPassSound != null)
            {
                audioSource.Play();
            }

            // Get the individual ring GameObject from the collider
            GameObject collidedRing = other.gameObject;

            // Check if the ring has not been collided with before
            if (!collidedRings.Contains(collidedRing) && id!=34)
            {
                // Add the current ring to the collection
                collidedRings.Add(collidedRing);

                Manager.Count();

                // Display the total ring count
                DisplayRingCount();

                Debug.Log("COUNT: " + Manager.GetCount());
            }
        }
    }

    // Display the total ring count on the UI
    private void DisplayRingCount()
    {
        text.text = "TOTAL RINGS\n" + Manager.GetCount() + " of 33";
    }
    
    // This method is called when the last ring is crossed
    public void ActivateUI()
    {
        // Activate the UI panel
        uiPanel.SetActive(true);
    }
}