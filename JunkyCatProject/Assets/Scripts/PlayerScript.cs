using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour
{

    public Material catMaterial;
    public Texture defaultTexture;

    public bool isDead = false;

    [SerializeField] private Rigidbody playerRigidBody;
    private Joystick joystick;
    [SerializeField] private float moveSpeed;
    private float moveTreshold = 0.1f;

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
        PLayerMove();
    }

    private void PLayerMove()
    {
        if (joystick != null && isDead == false)
            if (joystick.Horizontal > moveTreshold || joystick.Vertical > moveTreshold || joystick.Horizontal < -(moveTreshold) || joystick.Vertical < (-moveTreshold))
            {
                gameObject.GetComponent<Animator>().SetBool("isRunning", true);
                playerRigidBody.velocity = new Vector3(joystick.Horizontal * moveSpeed, playerRigidBody.velocity.y * (-1), joystick.Vertical * moveSpeed);
                float angle = Mathf.Atan2(joystick.Horizontal, joystick.Vertical) * Mathf.Rad2Deg;

                if(angle > (-30) && angle < 30)
                    transform.rotation = Quaternion.Euler(0f, angle + 180, 0f);
                else if (angle <= (-30) && angle > (-150))
                    transform.rotation = Quaternion.Euler(0f, (-30) + 180, 0f);
                else if (angle <= (-150))
                    transform.rotation = Quaternion.Euler(0f, (-(angle + 180)) + 180, 0f);
                else if (angle >= 30 && angle < 150)
                    transform.rotation = Quaternion.Euler(0f, 30 + 180, 0f);
                else if (angle >= 150)
                    transform.rotation = Quaternion.Euler(0f, (-(angle - 180)) + 180, 0f);
            }
        else
                transform.rotation = Quaternion.Euler(0f, 180, 0f);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Enemy")
        {
            gameObject.GetComponent<Animator>().SetBool("isDead", true);
            isDead = true;
        }
    }

}
