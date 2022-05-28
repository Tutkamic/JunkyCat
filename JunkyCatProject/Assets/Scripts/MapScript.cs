using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapScript : MonoBehaviour
{
    private CameraScript cameraScript;
    private MapManagerScript mapManagerScript;


    void Start()
    {

        cameraScript = FindObjectOfType<CameraScript>();
        mapManagerScript = FindObjectOfType<MapManagerScript>();
    }


    void Update()
    {
        if(cameraScript.transform.position.z > this.transform.position.z + 7.2)
        {
            mapManagerScript.MapCreate();
            Destroy(gameObject);
        }
    }


}
