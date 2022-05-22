using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SceneManagerScript : MonoBehaviour
{
    [SerializeField] PlayerScript playerScript;

    public Image[] colorButtonImage;
    public Sprite[] colorButtonSpriteActive;
    public Sprite[] colorButtonSpriteUnactive;
    public TextMeshProUGUI playerNameText;

    public Texture[] playerBodyMaterialTexture;
    public Material CatBodyMaterial;

    public GameObject[] manualScreen;

    private bool next = false;

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
        PlayerChnages(0, "Fonfel");
    }

    public void Color2()
    {
        PlayerChnages(1, "Fisiek");
    }
    public void Color3()
    {
        PlayerChnages(2, "Chester");
    }
    public void Color4()
    {
        PlayerChnages(3, "Dodi");
    }
    public void Color5()
    {
        PlayerChnages(4, "Tzomaraka");
    }
    public void Color6()
    {
        PlayerChnages(5, "Milka");
    }

    private void PlayerChnages(int numer, string nazwa)
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

}
