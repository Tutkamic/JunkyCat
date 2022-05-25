using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    [SerializeField] SliderScript sliderScript;

    public Material catMaterial;
    public Texture defaultTexture;

    public bool isDead = false;
    private int maxHealth = 200;
    private int maxEnergy = 200;
    private int maxLife = 9;
    public int health;
    public int energy;
    public int life;

    [SerializeField] private Rigidbody playerRigidBody;
    [SerializeField] Joystick joystick;
    [SerializeField] private float moveSpeed;
    private float moveTreshold = 0.1f;

    // Start is called before the first frame update
    void Start()
    {
        TextureSet();
        sliderScript.SetMaxSliderValue(sliderScript.HealthSlider, maxHealth);
        sliderScript.SetMaxSliderValue(sliderScript.EnergySlider, maxEnergy);
        sliderScript.SetMaxSliderValue(sliderScript.LifeSlider, maxLife);
        SetMaxValue();

        StartCoroutine(EnergyOverTime());
        StartCoroutine(HealthOverTime());
    }

    private void TextureSet()
    {
        if (GameManagerScript.instance.playerMaterialTexture != null)
            catMaterial.SetTexture("_BaseMap", GameManagerScript.instance.playerMaterialTexture);
        else
            catMaterial.SetTexture("_BaseMap", defaultTexture);
    }

    private void SetMaxValue()
    {
        health = maxHealth;
        energy = maxEnergy;
        life = maxLife;
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
        {
            gameObject.GetComponent<Animator>().SetBool("isRunning", true);

            if (joystick.Horizontal > moveTreshold || joystick.Vertical > moveTreshold || joystick.Horizontal < -(moveTreshold) || joystick.Vertical < (-moveTreshold))
            {
              //  playerRigidBody.velocity = new Vector3(joystick.Horizontal * moveSpeed, playerRigidBody.velocity.y * (-1), joystick.Vertical * moveSpeed);
                transform.position += new Vector3(joystick.Horizontal * moveSpeed, 0f, joystick.Vertical * moveSpeed);
                float angle = Mathf.Atan2(joystick.Horizontal, joystick.Vertical) * Mathf.Rad2Deg;

                if (angle > (-30) && angle < 30)
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

        if (transform.position.y >= 0.172)
        {
            transform.position = new Vector3(transform.position.x, 0.172f, transform.position.z);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Enemy")
        {
            // gameObject.GetComponent<Animator>().SetBool("isDead", true);
            //    isDead = true;
            life -= 1;
            sliderScript.SetSliderValue(sliderScript.LifeSlider, life);
        }
    }

    IEnumerator EnergyOverTime()
    {
        yield return new WaitForSeconds(5);
        energy -= 10;
    }
    IEnumerator HealthOverTime()
    {
        yield return new WaitForSeconds(5);
        health -= 10;
    }

}
