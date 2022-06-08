using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAnimationScript : MonoBehaviour
{
    public float animationRunSpeed;

    [SerializeField] PlayerScript playerScript;
    private void OnEnable()
    {
        PlayerScript.CatDied += CatDiedAnimation;
    }


    private void OnDisable()
    {
        PlayerScript.CatDied -= CatDiedAnimation;
    }

    private void Awake()
    {
        playerScript = GetComponent<PlayerScript>();
    }
    // Start is called before the first frame update
    void Start()
    {
        StartAnimation();
        gameObject.GetComponent<Animator>().SetBool("isDead", false);
    }

    // Update is called once per frame
    void Update()
    {
        AnimationRunSpeed();
    }

    void StartAnimation()
    {
        if (SceneManager.GetActiveScene().name == "GamePlayScene")
            gameObject.GetComponent<Animator>().SetBool("isRunning", true);
        else
            gameObject.GetComponent<Animator>().SetBool("isRunning", false);
    }

    void CatDiedAnimation()
    {
        gameObject.GetComponent<Animator>().SetBool("isDead", true);
    }

    public void AnimationRunSpeed()
    {
        if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 3f)
            animationRunSpeed = PlayerMovementScript.Remap(this.transform.position.z, (playerScript.cameraScript.transform.position.z + 3f), (playerScript.cameraScript.transform.position.z + 5f), playerScript.playerInputScript.catAndCamMoveSpeed, playerScript.playerInputScript.catAndCamMoveSpeed + 1.0f);
        else
            animationRunSpeed = playerScript.playerInputScript.catAndCamMoveSpeed;

        gameObject.GetComponent<Animator>().SetFloat("runSpeed", animationRunSpeed * playerScript.playerMovementScript.levelFactor);
    }
}
