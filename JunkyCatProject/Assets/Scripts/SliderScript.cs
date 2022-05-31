using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderScript : MonoBehaviour
{
    public Slider HealthSlider;
    public Slider EnergySlider;

    public void SetMaxSliderValue(Slider slider, int maxValue)
    {
        slider.maxValue = maxValue;
        slider.value = maxValue;
    }
    public void SetSliderValue(Slider slider, int value)
    {
        slider.value = value;
    }

}
