using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSoundManagerScript : MonoBehaviour
{

    public AudioSource addSound;
    public AudioSource hitSound;

    public void PlaySound(AudioSource sound)
    {
        sound.Play();
    }

}
