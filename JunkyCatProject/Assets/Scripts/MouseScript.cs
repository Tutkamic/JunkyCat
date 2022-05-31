using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MouseScript : MonoBehaviour
{
    private GameObject cat;
    private Rigidbody rb;
    private float distance;
    bool isInRange = false;

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
        CatDistance();
    }

    void CatDistance()
    {
        distance = Vector3.Distance(cat.transform.position, this.transform.position);
        if (distance < 2.5 && isInRange == false)
        {
            isInRange = true;
            StartCoroutine(MouseRun());
        }
    }

    IEnumerator MouseRun()
    {
        while (distance < 2.5)
        {
            if (rb.velocity.magnitude < 1)
                rb.AddForce(this.transform.position - cat.transform.position, ForceMode.Impulse);
            else rb.velocity = Vector3.zero;

            rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
            yield return null;
        }
        isInRange = false;
        rb.velocity = Vector3.zero;
    }
}
