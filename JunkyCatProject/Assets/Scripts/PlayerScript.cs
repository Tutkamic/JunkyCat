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
    [SerializeField] internal CameraScript cameraScript;
    [SerializeField] internal PlayerInputScript playerInputScript;
    [SerializeField] internal PlayerMovementScript playerMovementScript;
    [SerializeField] internal PlayerCollisionScript playerCollisionScript;
    [SerializeField] internal PlayerStatsScript playerStatsScript;

    [SerializeField] private Rigidbody playerRigidBody;


    public Material catMaterial;
    public Texture defaultTexture;

    public bool isDead = false;


    private void Awake()
    {
        playerInputScript = GetComponent<PlayerInputScript>();
        playerMovementScript = GetComponent<PlayerMovementScript>();
        playerCollisionScript = GetComponent<PlayerCollisionScript>();
        playerStatsScript = GetComponent<PlayerStatsScript>();
    }

    // Start is called before the first frame update
    void Start()
    {
        TextureSet();

        if(SceneManager.GetActiveScene().name == "GamePlayScene")
            gameObject.GetComponent<Animator>().SetBool("isRunning", true);
        else
            gameObject.GetComponent<Animator>().SetBool("isRunning", false);

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

    }


}
