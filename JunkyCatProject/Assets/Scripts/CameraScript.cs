using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;
    public float camConstantSpeed;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
            transform.position += new Vector3(0f, 0f, playerScript.playerInputScript.catAndCamMoveSpeed * camConstantSpeed * playerScript.playerMovementScript.forwardSpeedFactor * playerScript.playerMovementScript.levelFactor) * Time.fixedDeltaTime;
    }


}
