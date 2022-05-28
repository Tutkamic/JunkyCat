using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public GameObject[] mapEasy;
    public GameObject[] mapMiddle;
    public GameObject[] mapHard;

    private Vector3 spawnMapPosition;

    // Start is called before the first frame update
    void Start()
    {
        spawnMapPosition = new Vector3(0f, 0f, 16.324f);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {

    }

    public void MapCreate()
    {
        Instantiate(mapEasy[0], spawnMapPosition, Quaternion.identity);
      //  spawnMapPosition.z += 16.324f;
    }

}
