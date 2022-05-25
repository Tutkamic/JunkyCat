using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public GameObject[] mapEasy;
    public GameObject[] mapMiddle;
    public GameObject[] mapHard;

    public float mapSpeed = 1f;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        mapEasy[0].transform.position += new Vector3(0f, 0f, -mapSpeed) * Time.deltaTime;
    }

    private void FixedUpdate()
    {

    }

  //  IEnumerator MapMove()
  //  {
       // yield return new WaitUntil;
   // }
}
