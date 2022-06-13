using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStatsScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;

    private int maxEnergy = 100;
    private int maxLife = 9;
    public int energy;
    public int life;

    public int kocimietkaAdd = 10;
    public int energyLossOverTime;

    private int energyTime = 1;

    public bool catOutOfLife;
    public bool pauseStats;
    public bool isBoost = false;

    public GameObject boostSphere;


    private void OnEnable()
    {
        PlayerScript.CatDied += CatStatReset;
        SceneManagerScript.Pause += StopStats;
        SceneManagerScript.Resume += StartStats;
        CountDownScript.StartGo += StartStats;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= CatStatReset;
        SceneManagerScript.Pause -= StopStats;
        SceneManagerScript.Resume -= StartStats;
        CountDownScript.StartGo -= StartStats;
    }

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
        catOutOfLife = false;
        pauseStats = false;
    }

    void Start()
    {
        StopStats();

        SetMaxSliderValue();
        SetStartValue();
    }

    private void SetMaxSliderValue()
    {
        playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.EnergySlider, maxEnergy);
        playerScript.sliderLifeScript.SetMaxSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, maxLife);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void SetStartValue()
    {
        energy = 40;
        life = 4;
        playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
        playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
    }
    public void EnergyAdd()
    {
        if (energy <= 0)
        {
            energy += kocimietkaAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
            StartCoroutine(EnergyOverTime());
        }
        else if (energy > 0)
        {
            energy += kocimietkaAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);

            if(energy >= maxEnergy/2 && isBoost == false)
            {
                StartCoroutine(EnergyBoost());
            }
            else 
                playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.addSound);
        }
    }

    public void MouseAdd()
    {
        if (life < maxLife)
        {
            life++;
            playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
        }
    }

    public void GetHit()
    {
        if (life > 1)
        {
            life -= 1;
            playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
        }
        else if (life == 1)
        {
            life -= 1;
            playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
            catOutOfLife = true;
            //CAT IS DEAD
        }
    }

    IEnumerator EnergyOverTime()
    {
        while (energy > 0)
        {
            yield return new WaitForSeconds(energyTime);
            energy -= energyLossOverTime;

            if (energy < 0)
            {
                energy = 0;
            }

            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
        }
    }

    private void CatStatReset()
    {
        catOutOfLife = false;
        SetMaxSliderValue();
        SetStartValue();
        StopAllCoroutines();
    }


    private void StopStats()
    {
        StopAllCoroutines();
        energyLossOverTime = 0;
        pauseStats = true;
    }

    private void StartStats()
    {
        StartCoroutine(EnergyOverTime());
        energyLossOverTime = 2;
        pauseStats = false;
    }

    IEnumerator EnergyBoost()
    {
        playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.boostSound);
        isBoost = true;
        boostSphere.SetActive(true);

        while (energy >= maxEnergy/2)
        {
            playerScript.playerCollisionScript.isImmune = true;
            yield return null;
        }
        playerScript.playerCollisionScript.isImmune = false;
        isBoost = false;
        boostSphere.SetActive(false);
    }
}
