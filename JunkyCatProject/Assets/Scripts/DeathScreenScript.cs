using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class DeathScreenScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;
    [SerializeField] GameObject deathScreen;
    [SerializeField] GameObject newHighscoreText;

    public TextMeshProUGUI finalScoreText;

    private void OnEnable()
    {
        PlayerScript.CatDied += DeathScreen;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= DeathScreen;
    }

    void Awake()
    {
        deathScreen.gameObject.SetActive(false);
        playerScript = FindObjectOfType<PlayerScript>();
    }

    public void MainMenuButton()
    {
        SceneManager.LoadScene(0);
        deathScreen.gameObject.SetActive(false);
    }

    public void PlayAgainButton1()
    {
        SceneManager.LoadScene(2);
        deathScreen.gameObject.SetActive(false);
    }

    void DeathScreen()
    { 
        deathScreen.gameObject.SetActive(true);
        finalScoreText.text = GameManagerScript.instance.finalScore.ToString();

        if(GameManagerScript.instance.finalScore > GameManagerScript.instance.highscore)
        {
            GameManagerScript.instance.highscore = GameManagerScript.instance.finalScore;
            GameManagerScript.instance.highscorePlayerName = GameManagerScript.instance.playerName;
            newHighscoreText.gameObject.SetActive(true);
        }
        else
            newHighscoreText.gameObject.SetActive(false);
    }
}