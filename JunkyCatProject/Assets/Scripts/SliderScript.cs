using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderScript : MonoBehaviour
{
    public Slider EnergySlider;
    public Image fill;
    public Gradient gradient;

    public void SetMaxSliderValue(Slider slider, int maxValue)
    {
        slider.maxValue = maxValue;
        slider.value = maxValue;
        gradient.Evaluate(0f);
    }
    public void SetSliderValue(Slider slider, int value)
    {
        slider.value = value;
        fill.color = gradient.Evaluate(slider.normalizedValue);
    }

}
