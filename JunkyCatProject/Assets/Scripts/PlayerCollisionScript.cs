using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollisionScript : MonoBehaviour
{

    [SerializeField] PlayerScript playerScript;

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "Enemy")
        {
            playerScript.playerStatsScript.GetHit();
            playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.hitSound);
        }
    }

    private void OnTriggerEnter(Collider trigger)
    {
        playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.addSound);

        if (trigger.tag == "Kocimietka")
        {
            Destroy(trigger.gameObject);
            playerScript.playerStatsScript.KocimietkaAdd();
        }
        else if (trigger.tag == "Milk")
        {
            Destroy(trigger.gameObject);
            playerScript.playerStatsScript.MilkAdd();

        }
        else if (trigger.tag == "Mouse")
        {
            Destroy(trigger.gameObject);
            playerScript.playerStatsScript.MouseAdd();
        }
    }
}
