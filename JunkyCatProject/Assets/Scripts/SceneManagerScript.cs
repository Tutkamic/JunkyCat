using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class SceneManagerScript : MonoBehaviour
{

    public void StartButton()
    {
        SceneManager.LoadScene(1);
    }
    public void HighScoresButton()
    {
    
    }
    public void ExitButton()
    {
        Application.Quit();
    }
    public void MainMenuButton()
    {
        SceneManager.LoadScene(0);
    }
    public void GoButton()
    {
        SceneManager.LoadScene(2);
    }

}
