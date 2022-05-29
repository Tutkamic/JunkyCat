using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStatsScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;

    private int maxHealth = 200;
    private int maxEnergy = 200;
    private int maxLife = 9;
    public int health;
    public int energy;
    public int life;

    public int kocimietkaAdd = 20;
    public int milkAdd = 20;
    public int energyLossOverTime = 5;
    public int healthLossOverTime = 5;

    public int healthAndEnergyTime = 1;

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
    }

    void Start()
    {
        SetMaxValue();
        playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.HealthSlider, maxHealth);
        playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.EnergySlider, maxEnergy);
        playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.LifeSlider, maxLife);

        StartCoroutine(EnergyOverTime());
        StartCoroutine(HealthOverTime());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void SetMaxValue()
    {
        health = maxHealth;
        energy = maxEnergy;
        life = 4;
        playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.LifeSlider, 4);
    }
    public void KocimietkaAdd()
    {
        if (energy <= 0)
        {
            energy += kocimietkaAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
            StartCoroutine(EnergyOverTime());
        }
        else
        {
            energy += kocimietkaAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
        }
    }

    public void MilkAdd()
    {
        if (health <= 0)
        {
            health += milkAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.HealthSlider, health);
            StartCoroutine(HealthOverTime());
        }
        else
        {
            health += milkAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.HealthSlider, health);
        }
    }

    public void MouseAdd()
    {
        if (life < maxLife)
        {
            life++;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.LifeSlider, life);
        }
    }

    public void GetHit()
    {
        // gameObject.GetComponent<Animator>().SetBool("isDead", true);
        //    isDead = true;
        if (life > 0)
        {
            life -= 1;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.LifeSlider, life);
        }
        else
        {
            //   CatDied();
            //CAT IS DEAD
        }
    }

    IEnumerator EnergyOverTime()
    {
        while (energy > 0)
        {
            yield return new WaitForSeconds(healthAndEnergyTime);
            energy -= energyLossOverTime;

            if (energy < 0)
                energy = 0;

            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
        }
    }
    IEnumerator HealthOverTime()
    {
        while (health > 0)
        {
            yield return new WaitForSeconds(healthAndEnergyTime);
            health -= healthLossOverTime;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.HealthSlider, health);
        }
        //CAT IS DEAD
    }
}
