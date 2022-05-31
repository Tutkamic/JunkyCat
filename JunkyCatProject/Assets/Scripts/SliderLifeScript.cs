using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderLifeScript : MonoBehaviour
{

    public Slider LifeSlider;

    public void SetMaxSliderLifeValue(Slider slider, int maxValue)
    {
        slider.maxValue = maxValue;
        slider.value = maxValue;
    }
    public void SetSliderLifeValue(Slider slider, int value)
    {
        slider.value = value;
    }

}
