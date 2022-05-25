using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapScript : MonoBehaviour
{
    public float mapSpeed = 1f;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {
        transform.position += new Vector3(0f, 0f, -mapSpeed) * Time.deltaTime;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "MapDestroy")
        {
            Destroy(gameObject);
        }
    }
}
