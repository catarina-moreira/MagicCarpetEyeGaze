using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public EventsData eventsData;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Check if the collided object has the tag "Obstacle"
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            eventsData.collisionData();
        }
    }
}
