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
    public int milkAdd = 10;
    public int energyLossOverTime = 10;

    public int energyTime = 1;

    public bool catOutOfLife;
    public bool pauseStats;

    private void OnEnable()
    {
        PlayerScript.CatDied += CatStatReset;
        SceneManagerScript.Pause += StopStats;
        SceneManagerScript.Resume += StartStats;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= CatStatReset;
        SceneManagerScript.Pause -= StopStats;
        SceneManagerScript.Resume -= StartStats;
    }

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
        catOutOfLife = false;
        pauseStats = false;
    }

    void Start()
    {
        SetMaxSliderValue();
        SetStartValue();
        StartCoroutine(EnergyOverTime());
    }

    private void SetMaxSliderValue()
    {
        playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.EnergySlider, maxEnergy);
        playerScript.sliderLifeScript.SetMaxSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, maxLife);
    }

    // Update is called once per frame
    void Update()
    {
        CatSpeedOverEnergy();
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
        else if (energy > 0 && energy <= maxEnergy)
        {
            energy += kocimietkaAdd;
            playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
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
                energy = 0;

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

    void CatSpeedOverEnergy()
    {
        if(playerScript.catHasDied == false && pauseStats == false)
        {
            playerScript.playerInputScript.catAndCamMoveSpeed = Mathf.Lerp(1.5f, 4f, playerScript.sliderScript.EnergySlider.normalizedValue);
            playerScript.playerAnimationScript.animationRunSpeed = Mathf.Lerp(1.5f, 3f, playerScript.sliderScript.EnergySlider.normalizedValue);
        }
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
        energyLossOverTime = 10;
        pauseStats = false;
    }
}
