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

    public bool catOutOfLife;
    public bool pauseStats;
    public bool isBoost = false;

    private float boostTime = 5f;

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
        energy = 90;
        life = 4;
        playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
        playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
    }
    public void EnergyAdd()
    {
        playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.addSound);
        energy += kocimietkaAdd;

        if (energy >= maxEnergy)
        {
            energy = 0;
            if (life < maxLife)
            {
                life++;
                playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
            }
        }
        playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
    }

    public void MouseAdd()
    {
        if(isBoost == false)
        {
            StartCoroutine(EnergyBoost());
        }
        else
        {
            StopAllCoroutines();
            StartCoroutine(EnergyBoost());
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
        energyLossOverTime = 2;
        pauseStats = false;
    }

    IEnumerator EnergyBoost()
    {
        playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.boostSound);
        isBoost = true;
        boostSphere.SetActive(true);
        float time = Time.time;

        while (Time.time - time < boostTime)
        {
            playerScript.playerCollisionScript.isImmune = true;
            yield return null;
        }
        playerScript.playerCollisionScript.isImmune = false;
        isBoost = false;
        boostSphere.SetActive(false);
    }
}
