using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MouseScript : MonoBehaviour
{
    private GameObject cat;
    private Rigidbody rb;
    private float distance;
    bool isInRange = false;
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
        CatDistance();
    }

    void CatDistance()
    {
        distance = Vector3.Distance(cat.transform.position, this.transform.position);
        if (distance < 2.5 && isInRange == false && isGrounded == true)
        {
            isInRange = true;
            StartCoroutine(MouseRun());
        }
    }

    IEnumerator MouseRun()
    {
        while (distance < 2.5 && isGrounded == true)
        {
            if (rb.velocity.magnitude < 1)
                rb.AddForce(this.transform.position - cat.transform.position, ForceMode.Impulse);
            else rb.velocity = Vector3.zero;

            rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
            yield return null;
        }
        isInRange = false;
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
}
