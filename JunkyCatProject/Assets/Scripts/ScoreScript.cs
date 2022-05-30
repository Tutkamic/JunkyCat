using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreScript : MonoBehaviour
{
    public int score = 0;

    private void OnEnable()
    {
        PlayerScript.CatDied += StopScore;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= StopScore;
    }
    private void Start()
    {
        StartCoroutine(ScoreOverTime(1));
    }

    void Update()
    {
        gameObject.GetComponent<TextMeshProUGUI>().text = score.ToString() + " m";
    }

    IEnumerator ScoreOverTime(float time)
    {
        while (true)
        {
            yield return new WaitForSeconds(time);
            score += 1;
            GameManagerScript.instance.finalScore = score;
        }

    }

    void StopScore()
    {
        StopAllCoroutines();
    }
}
