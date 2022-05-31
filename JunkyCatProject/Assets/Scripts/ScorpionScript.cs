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
        if(isCatKilled == false)
         CatDistance();
    }

    void CatDistance()
    {
        distance = Vector3.Distance(cat.transform.position, this.transform.position);
        if (distance < 2.5 && isInRange == false && isBite == false)
        {
            isInRange = true;
            StartCoroutine(MouseRun());
        }
    }

    IEnumerator MouseRun()
    {
        while (distance < 3)
        {
            rb.AddForce((cat.transform.position - this.transform.position) * 3.5f, ForceMode.Impulse);
            rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
            yield return new WaitForSecondsRealtime(0.5f);
        }
        isInRange = false;
        rb.velocity = Vector3.zero;
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
}
