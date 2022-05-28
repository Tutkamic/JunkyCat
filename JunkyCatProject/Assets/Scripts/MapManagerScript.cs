using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public GameObject[] mapEasy;
    public GameObject[] mapMiddle;
    public GameObject[] mapHard;

    private Vector3 spawnMapPosition;
    private Vector3 spawnSecondMapPosition;

    // Start is called before the first frame update
    void Start()
    {
        spawnMapPosition = new Vector3(0f, 0f, 32.648f);
        spawnSecondMapPosition = new Vector3(0f, 0f, 16.324f);
        Instantiate(mapEasy[Random.Range(0, 2)], spawnSecondMapPosition, Quaternion.identity);
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
        Instantiate(mapEasy[Random.Range(0, 2)], spawnMapPosition, Quaternion.identity);
        spawnMapPosition.z += 16.324f;
    }

}
