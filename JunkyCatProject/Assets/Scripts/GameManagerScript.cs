using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerScript : MonoBehaviour
{
    public static GameManagerScript instance { get; private set; }
    public string playerName;
    public string highscorePlayerName;
    public Texture playerMaterialTexture;
    public int finalScore;
    public int highscore = 0;

    private void OnEnable()
    {
        PlayerScript.CatDied += SaveHighscore;
    }

    private void OnDisable()
    {
        PlayerScript.CatDied -= SaveHighscore;
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        highscore = PlayerPrefs.GetInt("highscore");
        highscorePlayerName = PlayerPrefs.GetString("highscoreName");

       // PlayerPrefs.DeleteKey("highscore");
       // PlayerPrefs.DeleteKey("highscoreName");
    }

    void SaveHighscore()
    {
        if (finalScore > highscore)
        {
            PlayerPrefs.SetInt("highscore", finalScore);
            PlayerPrefs.SetString("highscoreName", playerName);
        }
    }

}
