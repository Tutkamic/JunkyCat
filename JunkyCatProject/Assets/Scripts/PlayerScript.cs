using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour
{
    public Material catMaterial;
    public Texture defaultTexture;

    [SerializeField] private Rigidbody playerRigidBody;
    private Joystick joystick;
    [SerializeField] private float moveSpeed;

    // Start is called before the first frame update
    void Start()
    {
        if (GameManagerScript.instance.playerMaterialTexture != null)
            catMaterial.SetTexture("_BaseMap", GameManagerScript.instance.playerMaterialTexture);
        else
            catMaterial.SetTexture("_BaseMap", defaultTexture);

        joystick = FindObjectOfType<Joystick>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {
        if(joystick != null)
        {
            playerRigidBody.velocity = new Vector3(joystick.Horizontal * moveSpeed, playerRigidBody.velocity.y * (-1), joystick.Vertical * moveSpeed);

            if (joystick.Horizontal != 0 || joystick.Vertical != 0)
            {
                transform.rotation = Quaternion.LookRotation(playerRigidBody.velocity * (-1));
            }
        }

    }

}
