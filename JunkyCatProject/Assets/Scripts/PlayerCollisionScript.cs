using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollisionScript : MonoBehaviour
{
    public bool isImmune = false;
    float immuneTime = 2f;
    public Shader immuneMaterialShader;
    public Shader normalMaterialShader;
    public Material catMaterial;

    [SerializeField] PlayerScript playerScript;

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
        catMaterial.shader = normalMaterialShader;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if ((collision.collider.tag == "Enemy" || collision.collider.tag == "Scorpion") && isImmune == false)
        {
            playerScript.playerStatsScript.GetHit();
            playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.hitSound);
            isImmune = true;
            StartCoroutine(CatIsImmune());
        }
        if(collision.collider.tag == "Mouse")
        {
            Destroy(collision.gameObject);
            playerScript.playerStatsScript.MouseAdd();
            playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.addSound);
        }
    }

    private void OnTriggerEnter(Collider trigger)
    {


        if (trigger.tag == "Kocimietka" || trigger.tag == "Milk")
        {
            Destroy(trigger.gameObject);
            playerScript.playerStatsScript.EnergyAdd();
        }
    }

    IEnumerator CatIsImmune()
    {
        float immuneTimeStart = Time.time;
        while (Time.time < immuneTimeStart + immuneTime)
        {
            catMaterial.shader = immuneMaterialShader;
            yield return null;
        }
        catMaterial.shader = normalMaterialShader;
        isImmune = false;
    }
}
