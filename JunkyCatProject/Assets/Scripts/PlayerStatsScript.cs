using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStatsScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;

    private int maxEnergy = 200;
    private int maxLife = 9;
    public int energy;
    public int life;

    public int kocimietkaAdd = 20;
    public int energyLossOverTime;

    private int energyTime = 1;
    private float boostTime = 7f;

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
        energy = 100;
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

            if(energy >= maxEnergy && isBoost == false)
            {
                StartCoroutine(EnergyBoost());
            }
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
        energyLossOverTime = 3;
        pauseStats = false;
    }

    IEnumerator EnergyBoost()
    {
        isBoost = true;
        float boostTimeStart = Time.time;
        boostSphere.SetActive(true);

        while (Time.time - boostTimeStart < boostTime || energy >= maxEnergy)
        {
            playerScript.playerCollisionScript.isImmune = true;
            energy -= energyLossOverTime;
            yield return new WaitForSeconds(1);
        }
        playerScript.playerCollisionScript.isImmune = false;
        isBoost = false;
        boostSphere.SetActive(false);
    }
}
