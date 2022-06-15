using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishScript : MonoBehaviour
{

    [SerializeField] DeathScreenScript deathScreenScript;
    PlayerScript playerScript;

    private void Start()
    {
        playerScript = FindObjectOfType<PlayerScript>();
        deathScreenScript = FindObjectOfType<DeathScreenScript>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            deathScreenScript.gameOverText.text = "WINNER";
            deathScreenScript.kuwetaText.text = "Ogarniam te kuwete";
            playerScript.catFinish = true;
        }
    }
}
