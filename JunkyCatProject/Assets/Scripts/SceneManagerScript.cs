using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SceneManagerScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;

    public AudioSource clickSound;

    public Image[] colorButtonImage;
    public Sprite[] colorButtonSpriteActive;
    public Sprite[] colorButtonSpriteUnactive;
    public TextMeshProUGUI playerNameText;

    public Texture[] playerBodyMaterialTexture;
    public Material CatBodyMaterial;

    public Shader CatBodyShader;

    public GameObject[] manualScreen;

    public GameObject highScoreScreen;
    public TextMeshProUGUI highscoreName;
    public TextMeshProUGUI highscoreScore;

    public delegate void PauseGame();
    public static event PauseGame Pause;
    public static event PauseGame Resume;

    public GameObject pauseScreen;

    public bool gamePaused = false;
    private void Awake()
    {
        playerScript = FindObjectOfType<PlayerScript>();
    }
    private void Start()
    {
        if (SceneManager.GetActiveScene().name == "CharacterScene")
        {
            PlayerChanges(0, "Fonfel");
            CatBodyMaterial.shader = CatBodyShader;
        }
    }

    private void Update()
    {
        ExitPauseButton();
    }

    public void StartButton()
    {
        PLaySoundEffect();
        SceneManager.LoadScene(1);
    }
    public void HighScoresButton()
    {
        PLaySoundEffect();
        highScoreScreen.gameObject.SetActive(true);
        highscoreScore.text = GameManagerScript.instance.highscore.ToString();
        highscoreName.text = GameManagerScript.instance.highscorePlayerName.ToString();
    }

    public void HighScoreHide()
    {
        highScoreScreen.gameObject.SetActive(false);
    }
    public void ExitButton()
    {
        PLaySoundEffect();
        Application.Quit();
    }
    public void ResumeButton()
    {
        PLaySoundEffect();
        ResumeStart();
    }
    public void MainMenuButton()
    {
        PLaySoundEffect();
        SceneManager.LoadScene(0);
    }

    public void GoButton()
    {
        PLaySoundEffect();
        manualScreen[0].gameObject.SetActive(true);
    }
    public void ManualScreen1()
    {
        manualScreen[1].gameObject.SetActive(true);
    }
    public void ManualScreen2()
    {
        manualScreen[2].gameObject.SetActive(true);
    }
    public void ManualScreen3()
    {
        SceneManager.LoadScene(2);
    }

    public void Color1()
    {
        PlayerChanges(0, "Fonfel");
        PLaySoundEffect();
    }

    public void Color2()
    {
        PlayerChanges(1, "Fisiek");
        PLaySoundEffect();
    }
    public void Color3()
    {
        PlayerChanges(2, "Chester");
        PLaySoundEffect();
    }
    public void Color4()
    {
        PlayerChanges(3, "Dodi");
        PLaySoundEffect();
    }
    public void Color5()
    {
        PlayerChanges(4, "Tzomaraka");
        PLaySoundEffect();
    }
    public void Color6()
    {
        PlayerChanges(5, "Milka");
        PLaySoundEffect();
    }

    private void PlayerChanges(int numer, string nazwa)
    {
        ButtonStateChange(numer);
        PlayerNameText(nazwa);
        PlayerMaterialTexture(playerBodyMaterialTexture[numer]);
    }

    private void ButtonStateChange(int number)
    {
        for (int i = 0; i < colorButtonImage.Length; i++)
        {
            colorButtonImage[i].sprite = colorButtonSpriteUnactive[i];
        }
        colorButtonImage[number].sprite = colorButtonSpriteActive[number];
    }

    private void PlayerNameText(string name)
    {
        playerNameText.text = name;
        GameManagerScript.instance.playerName = name;
    }

    private void PlayerMaterialTexture(Texture texture)
    {
       GameManagerScript.instance.playerMaterialTexture = texture;
       CatBodyMaterial.SetTexture("_BaseMap", texture);
    }

    void PLaySoundEffect()
    {
        clickSound.Play();
    }

    void ExitPauseButton()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            if (SceneManager.GetActiveScene().name == "CharacterScene")
                SceneManager.LoadScene(0);
            else if (SceneManager.GetActiveScene().name == "MainMenu")
                Application.Quit();
            else if (SceneManager.GetActiveScene().name == "GamePlayScene")
                PauseStart();

        }
    }

    public void PauseStart()
    {
        if (gamePaused == false)
        {
            gamePaused = true;
            pauseScreen.SetActive(true);

            if (Pause != null)
                Pause();
        }
    }

    public void ResumeStart()
    {
        gamePaused = false;
        pauseScreen.SetActive(false);

        if (Resume != null)
            Resume();
    }

}
