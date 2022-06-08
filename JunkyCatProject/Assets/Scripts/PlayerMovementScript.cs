using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerMovementScript : MonoBehaviour
{
    [SerializeField] private Rigidbody playerRigidBody;
    [SerializeField] PlayerScript playerScript;

    public float forwardSpeedFactor;

    public bool catOutOfMap;
    private float distanceToGround = 1.95f;
    public  bool isGrounded;

    private void OnEnable()
    {
        PlayerScript.CatDied += CatOutOfMapReset;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= CatOutOfMapReset;
    }

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
        playerRigidBody = GetComponent<Rigidbody>();
        catOutOfMap = false;
    }

    void Start()
    {
        
    }


    void Update()
    {
        PlayerFallCheck();

        PlayerRotate(playerScript.playerInputScript.angle);

        if (isGrounded)
        {
            PlayerMovableArea();
        }

        ForwardSpeedFactor();
    }

    private void FixedUpdate()
    {
        GorundedCheck();

        if (playerScript.catHasDied == false && isGrounded == true)
        {
            PlayerConstantMove();
            PLayerMove();
        }
    }

    private void PlayerConstantMove()
    {
        playerRigidBody.AddForce(new Vector3(0f, 0f, playerScript.playerInputScript.catAndCamMoveSpeed * playerScript.playerInputScript.catConstantSpeed * forwardSpeedFactor), ForceMode.Force);
    }


    private void PLayerMove()
    {
        playerRigidBody.velocity = playerScript.playerInputScript.catVelocity;
    }

    private void PlayerRotate(float x)
    {
        if (x > (-30) && x < 30)
            transform.rotation = Quaternion.Euler(0f, x + 180, 0f);
        else if (x <= (-30) && x > (-150))
            transform.rotation = Quaternion.Euler(0f, (-30) + 180, 0f);
        else if (x <= (-150))
            transform.rotation = Quaternion.Euler(0f, (-(x + 180)) + 180, 0f);
        else if (x >= 30 && x < 150)
            transform.rotation = Quaternion.Euler(0f, 30 + 180, 0f);
        else if (x >= 150)
            transform.rotation = Quaternion.Euler(0f, (-(x - 180)) + 180, 0f);
        else
            transform.rotation = Quaternion.Euler(0f, 180, 0f);
    }

    private void PlayerMovableArea()
    {
        if (this.transform.position.z < playerScript.cameraScript.transform.position.z + 0.7f && playerScript.catHasDied == false)
        {
            catOutOfMap = true;
            //CAT IS DEAD
        }
        else 
            catOutOfMap = false;

        if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 5f)
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, playerScript.cameraScript.transform.position.z + 5f);
    }

    private void PlayerFallCheck()
    {
        if (this.transform.position.y < -2.0)
        {
            catOutOfMap = true;
            //CAT IS DEAD
        }
        else
            catOutOfMap = false;
    }

    private void CatOutOfMapReset()
    {
        catOutOfMap = false;
    }

    private void ForwardSpeedFactor()
    {
        if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 4.8f)
            forwardSpeedFactor = Remap(this.transform.position.z, (playerScript.cameraScript.transform.position.z + 4.8f), (playerScript.cameraScript.transform.position.z + 5f), 1, 1.3f);
        else
            forwardSpeedFactor = 1;
    }

    public static float Remap(float x, float a, float b, float c, float d)
    {
        float fraction = (x - a) / (b - a);
        return Mathf.Lerp(c, d, fraction);
    }

    private void GorundedCheck()
    {
        if (Physics.Raycast(this.transform.position, Vector3.down, distanceToGround + 0.1f))
        {
            isGrounded = true;
        }

        else
        {
            isGrounded = false;
        }

    }
}
