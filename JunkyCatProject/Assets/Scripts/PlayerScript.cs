using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    public delegate void PlayerDied();
    public static event PlayerDied CatDied;

    [SerializeField] internal SliderScript sliderScript;
    [SerializeField] internal SliderLifeScript sliderLifeScript;
    [SerializeField] internal CameraScript cameraScript;
    [SerializeField] internal PlayerInputScript playerInputScript;
    [SerializeField] internal PlayerMovementScript playerMovementScript;
    [SerializeField] internal PlayerCollisionScript playerCollisionScript;
    [SerializeField] internal PlayerStatsScript playerStatsScript;
    [SerializeField] internal PlayerAnimationScript playerAnimationScript;
    [SerializeField] internal PlayerSoundManagerScript playerSoundManagerScript;
    [SerializeField] internal CountDownScript countDownScript;
    [SerializeField] internal ScoreScript scoreScript;

    public MapManagerScript mapManagerScript;

    [SerializeField] private Rigidbody playerRigidBody;

    public Material catMaterial;
    public Texture defaultTexture;

    public GameObject deathScreen;

    public bool catHasDied;
    public bool catFinish;

    private void Awake()
    {

        playerInputScript = GetComponent<PlayerInputScript>();
        playerMovementScript = GetComponent<PlayerMovementScript>();
        playerCollisionScript = GetComponent<PlayerCollisionScript>();
        playerStatsScript = GetComponent<PlayerStatsScript>();
        playerAnimationScript = GetComponent<PlayerAnimationScript>();
        playerSoundManagerScript = GetComponent<PlayerSoundManagerScript>();
        countDownScript = FindObjectOfType<CountDownScript>();
        scoreScript = FindObjectOfType<ScoreScript>();
        catHasDied = false;
        catFinish = false;
    }

    // Start is called before the first frame update
    void Start()
    {
        TextureSet();
    }

    private void TextureSet()
    {
        if (GameManagerScript.instance.playerMaterialTexture != null)
            catMaterial.SetTexture("_BaseMap", GameManagerScript.instance.playerMaterialTexture);
        else
            catMaterial.SetTexture("_BaseMap", defaultTexture);

    }



    // Update is called once per frame
    void Update()
    {
        CatDead();
    }

    public void CatDead()
    {
        if (playerMovementScript.catOutOfMap == true || playerStatsScript.catOutOfLife == true || catFinish == true)
        {
            if (playerMovementScript.catOutOfMap == true || playerStatsScript.catOutOfLife == true)
                playerSoundManagerScript.PlaySound(playerSoundManagerScript.hitSound);
            
            catHasDied = true;

            if (CatDied != null)
            {
                CatDied();
            }
        }

    }


}
