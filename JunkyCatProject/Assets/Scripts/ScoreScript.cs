using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreScript : MonoBehaviour
{
    public int score = 0;
    public GameObject cat;
    [SerializeField] PlayerScript playerScript;


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
            score = (int)(cat.transform.position.z * 0.5) + 3;
            gameObject.GetComponent<TextMeshProUGUI>().text = score.ToString() + " m";
            GameManagerScript.instance.finalScore = score;
        }

    }


}
