using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rigidComponent : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        rb.freezeRotation = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}




    
