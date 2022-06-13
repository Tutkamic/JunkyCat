using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderScript : MonoBehaviour
{
    public Slider EnergySlider;
    public Image fill;
    public Material sliderMaterial;

    public void SetMaxSliderValue(Slider slider, int maxValue)
    {
        slider.maxValue = maxValue;
        slider.value = maxValue;
    }
    public void SetSliderValue(Slider slider, int value)
    {
        slider.value = value;
        sliderMaterial.SetFloat("_gradientEnergy", slider.normalizedValue);    
    }

}
