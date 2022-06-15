using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSoundManagerScript : MonoBehaviour
{

    public AudioSource addSound;
    public AudioSource hitSound;
    public AudioSource boostSound;
    public AudioSource lifeSound;

    public void PlaySound(AudioSource sound)
    {
        sound.Play();
    }

}
