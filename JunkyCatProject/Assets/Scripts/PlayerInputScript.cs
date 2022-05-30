using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInputScript : MonoBehaviour
{
    [SerializeField] Joystick joystick;
    [SerializeField] PlayerScript playerScript;
    [SerializeField] private Rigidbody playerRigidBody;

    public float angle;
    public float catMoveSpeed;
    public float catAndCamMoveSpeed;
    public float catConstantSpeed;

    public Vector3 catVelocity;

    private void OnEnable()
    {
        PlayerScript.CatDied += StopMoving;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= StopMoving;
    }

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
        playerRigidBody = GetComponent<Rigidbody>();
    }

    void Start()
    {
        joystick = FindObjectOfType<Joystick>();
    }


    void Update()
    {
        PlayerInput();
    }

    private void PlayerInput()
    {
        if (joystick != null)
        {
            catVelocity = new Vector3(joystick.Horizontal * catMoveSpeed, playerRigidBody.velocity.y, joystick.Vertical * catMoveSpeed);
            angle = Mathf.Atan2(joystick.Horizontal, joystick.Vertical) * Mathf.Rad2Deg;
        }
    }

    void StopMoving()
    {
        catMoveSpeed = 0;
        catAndCamMoveSpeed = 0;
        catConstantSpeed = 0;
        angle = -180;
    }
}
