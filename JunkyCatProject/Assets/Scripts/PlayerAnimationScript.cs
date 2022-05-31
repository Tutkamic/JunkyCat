using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAnimationScript : MonoBehaviour
{
    public float animationRunSpeed;
    private void OnEnable()
    {
        PlayerScript.CatDied += CatDiedAnimation;
    }


    private void OnDisable()
    {
        PlayerScript.CatDied -= CatDiedAnimation;
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
        AnimationRunSpeed(animationRunSpeed);
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

    public void AnimationRunSpeed(float speed)
    {
        gameObject.GetComponent<Animator>().SetFloat("runSpeed", speed);
    }
}
