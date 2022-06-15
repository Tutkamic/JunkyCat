using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreScript : MonoBehaviour
{
    public int score = 0;
    private int walkScore = 0;
    public int energyScore = 0;
    public GameObject cat;
    [SerializeField] PlayerScript playerScript;
    [SerializeField] DeathScreenScript deathScreenScript;


    private void Awake()
    {
        playerScript = FindObjectOfType<PlayerScript>();
    }
    private void Start()
    {

    }

    void Update()
    {
        if(playerScript.catHasDied == false)
        {
            walkScore = (int)(cat.transform.position.z * 0.5) + 2;
            score = walkScore + energyScore;
            gameObject.GetComponent<TextMeshProUGUI>().text = score.ToString();
            GameManagerScript.instance.finalScore = score;
        }

    }


}
