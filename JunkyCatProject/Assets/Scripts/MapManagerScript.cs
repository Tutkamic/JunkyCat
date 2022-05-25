using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public GameObject[] mapEasy;
    public GameObject[] mapMiddle;
    public GameObject[] mapHard;

    public static float mapSpeed = 1f;
    private Vector3 spawnMapPosition;

    // Start is called before the first frame update
    void Start()
    {
        spawnMapPosition = new Vector3(0.9077362f, -0.0765478f, 18.624f);
        StartCoroutine(MapCreate(16.3f));
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {

    }

    IEnumerator MapCreate(float time)
    {
        while (true)
        {
            yield return new WaitForSeconds(time);
            Instantiate(mapEasy[0], spawnMapPosition, Quaternion.identity);
        }
    }
}
