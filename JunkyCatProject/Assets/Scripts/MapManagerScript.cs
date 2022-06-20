using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public List<GameObject> beginMaps = new List<GameObject>();
    public List<GameObject> easyMaps = new List <GameObject>();
    public List<GameObject> middleMaps = new List<GameObject>();
    public List<GameObject> hardMaps = new List<GameObject>();
    public List<GameObject> impossibleMaps = new List<GameObject>();
    public GameObject finishMap;

    public int level = 1;
    public float levelSpeedFactor = 0.8f;

    private Vector3 spawnMapPosition;


    void Start()
    {
        spawnMapPosition = new Vector3(0f, 0f, 16.324f);
        MapCreate();
    }


    void Update()
    {

    }

    private void FixedUpdate()
    {

    }
    public void MapCreate()
    {
        switch (level)
        {
            case 1:
                InstantiateMap(beginMaps);
                levelSpeedFactor = 0.8f;
                break;
            case 2:
                InstantiateMap(easyMaps);
                levelSpeedFactor = 0.8f;
                break;
            case 3:
                InstantiateMap(middleMaps);
                levelSpeedFactor = 0.8f;
                break;
            case 4:
                InstantiateMap(hardMaps);
                levelSpeedFactor = 0.8f;
                break;
            case 5:
                InstantiateMap(impossibleMaps);
                levelSpeedFactor = 0.8f;
                break;
            case 6:
                Instantiate(finishMap, spawnMapPosition, Quaternion.identity);
                levelSpeedFactor = 0.8f;
                break;
        }
        spawnMapPosition.z += 16.324f;
    }

    private void InstantiateMap(List<GameObject> map)
    {
        int mapNumber = Random.Range(0, map.Count);
        Instantiate(map[mapNumber], spawnMapPosition, Quaternion.identity);
        map.RemoveAt(mapNumber);
        if (map.Count == 0)
            level++;
    }

}
