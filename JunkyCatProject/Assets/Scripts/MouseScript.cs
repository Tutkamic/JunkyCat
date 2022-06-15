using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MouseScript : MonoBehaviour
{
    private GameObject cat;
    private Rigidbody rb;
    private float distance;
    bool isGrounded;
    private float distanceToGround = 0.208f;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        cat = GameObject.FindGameObjectWithTag("Player");
    }
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
    }

    private void FixedUpdate()
    {
        GorundedCheck();
        MouseRunning();
    }


    private void GorundedCheck()
    {
        if (Physics.Raycast(this.transform.position, Vector3.down, distanceToGround + 0.1f))
        {
            isGrounded = true;
        }

        else
        {
            isGrounded = false;
        }
    }

    private void MouseRunning()
    {
        distance = Vector3.Distance(cat.transform.position, this.transform.position);
        if (distance < 2.5 && isGrounded == true)
        {
             if (rb.velocity.magnitude < 0.7f)
                rb.AddForce((this.transform.position - cat.transform.position), ForceMode.VelocityChange);


            rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
        }
    }
}
