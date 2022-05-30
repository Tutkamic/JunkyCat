using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAnimationScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartAnimation();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void StartAnimation()
    {
        if (SceneManager.GetActiveScene().name == "GamePlayScene")
            gameObject.GetComponent<Animator>().SetBool("isRunning", true);
        else
            gameObject.GetComponent<Animator>().SetBool("isRunning", false);
    }
}
