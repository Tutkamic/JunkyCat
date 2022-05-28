using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    public delegate void PlayerDied();
    public static event PlayerDied CatDied;

    [SerializeField] SliderScript sliderScript;
    [SerializeField] CameraScript cameraScript;


    public Material catMaterial;
    public Texture defaultTexture;

    public bool isDead = false;
    private int maxHealth = 200;
    private int maxEnergy = 200;
    private int maxLife = 9;
    public int health;
    public int energy;
    public int life;

    public int kocimietkaAdd = 20;
    public int energyLossOverTime = 5;
    public int healthLossOverTime = 5;

    public int healthAndEnergyTime = 1;

    [SerializeField] private Rigidbody playerRigidBody;
    [SerializeField] Joystick joystick;

    [SerializeField] private float catMoveSpeed;
    public float catAndCamMoveSpeed;
    public float catConstantSpeed;


    Vector3 catVelocity;

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

        if(SceneManager.GetActiveScene().name == "GamePlayScene")
            gameObject.GetComponent<Animator>().SetBool("isRunning", true);
        else
            gameObject.GetComponent<Animator>().SetBool("isRunning", false);

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
        life = 4;
        sliderScript.SetSliderValue(sliderScript.LifeSlider, 4);
    }

    // Update is called once per frame
    void Update()
    {
        PlayerInput();
        PlayerMovableArea();
    }



    private void FixedUpdate()
    {
        PlayerConstantMove();
        PLayerMove();
    }

    private void PlayerMovableArea()
    {
        if (this.transform.position.z < cameraScript.transform.position.z + 0.7f)
        {
            // gameObject.GetComponent<Animator>().SetBool("isDead", true);
            //    isDead = true;
            //CAT IS DEAD
        }
        if (this.transform.position.z > cameraScript.transform.position.z + 11f)
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, cameraScript.transform.position.z + 11f);
        if (this.transform.position.x > 1.4f)
            this.transform.position = new Vector3(1.4f, this.transform.position.y, this.transform.position.z);
        if (this.transform.position.x < -1.4f)
            this.transform.position = new Vector3(-1.4f, this.transform.position.y, this.transform.position.z);
    }

    private void PlayerConstantMove()
    {
        playerRigidBody.AddForce(new Vector3(0f, 0f, catAndCamMoveSpeed * catConstantSpeed), ForceMode.Force);
    }

    private void PlayerInput()
    {
        if (joystick != null && isDead == false)
        {

            catVelocity = new Vector3(joystick.Horizontal * catMoveSpeed, playerRigidBody.velocity.y, joystick.Vertical * catMoveSpeed);
        }
    }

    private void PLayerMove()
    {

        playerRigidBody.velocity = catVelocity;


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
        else
            transform.rotation = Quaternion.Euler(0f, 180, 0f);

    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Enemy")
        {
            // gameObject.GetComponent<Animator>().SetBool("isDead", true);
            //    isDead = true;
            if (life > 0)
            {
                life -= 1;
                sliderScript.SetSliderValue(sliderScript.LifeSlider, life);
            }
            else
            {
                //   CatDied();
                //CAT IS DEAD
            }

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Kocimietka")
        {
            if (energy <= 0)
            {
                energy += kocimietkaAdd;
                sliderScript.SetSliderValue(sliderScript.EnergySlider, energy);
                StartCoroutine(EnergyOverTime());
            }
            else
            {
                energy += kocimietkaAdd;
                sliderScript.SetSliderValue(sliderScript.EnergySlider, energy);
            }

        }


    }

    IEnumerator EnergyOverTime()
    {
        while(energy > 0)
        {
            yield return new WaitForSeconds(healthAndEnergyTime);
            energy -= energyLossOverTime;

            if(energy < 0)
                energy = 0;

            sliderScript.SetSliderValue(sliderScript.EnergySlider, energy);
        }
    }
    IEnumerator HealthOverTime()
    {
        while (health > 0)
        {
            yield return new WaitForSeconds(healthAndEnergyTime);
            health -= healthLossOverTime;
            sliderScript.SetSliderValue(sliderScript.HealthSlider, health);
        }
        //CAT IS DEAD
    }

}
