using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManagerScript : MonoBehaviour
{
    public List<GameObject> easyMaps = new List <GameObject>();
    public List<GameObject> middleMaps = new List<GameObject>();
    public List<GameObject> hardMaps = new List<GameObject>();

    public int level = 1;

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
                InstantiateMap(easyMaps);
                break;
            case 2:
                InstantiateMap(middleMaps);
                break;
            case 3:
                InstantiateMap(hardMaps);
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
