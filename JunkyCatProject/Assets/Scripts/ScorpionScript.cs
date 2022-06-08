using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScorpionScript : MonoBehaviour
{
    private GameObject cat;
    private Rigidbody rb;
    private float distance;
    bool isInRange;
    bool isBite;
    bool isCatKilled;
    float biteTime;
    float immuneTime = 2f;

    bool isGrounded;
    private float distanceToGround = 0.95f;

    private void OnEnable()
    {
        PlayerScript.CatDied += StopAttacking;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= StopAttacking;
    }

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        cat = GameObject.FindGameObjectWithTag("Player");
    }
    void Start()
    {
        isInRange = false;
        isBite = false;
        isCatKilled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(isBite == true)
        {
            if (Time.time - biteTime > immuneTime)
                isBite = false;
        }
    }

    private void FixedUpdate()
    {
        GorundedCheck();

        if (isCatKilled == false)
         CatDistance();
    }

    void CatDistance()
    {
        distance = Vector3.Distance(cat.transform.position, this.transform.position);
        if (distance < 2.5 && isInRange == false && isBite == false && isGrounded == true)
        {
            isInRange = true;
            StartCoroutine(ScorpionRun());
        }
    }

    IEnumerator ScorpionRun()
    {
        while (distance < 3 && isGrounded == true)
        {
            rb.AddForce((cat.transform.position - this.transform.position) * 3.0f, ForceMode.Impulse);
            rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
            yield return new WaitForSecondsRealtime(0.8f);
        }
        isInRange = false;
       // rb.velocity = Vector3.zero;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Player" && isBite == false)
        {
            StopAllCoroutines();
            biteTime = Time.time;
            isBite = true;
            isInRange = false;
        }
    }

    private void StopAttacking()
    {
        StopAllCoroutines();
        isCatKilled = true;
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
