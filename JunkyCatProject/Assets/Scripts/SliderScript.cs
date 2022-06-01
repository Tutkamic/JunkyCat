using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderScript : MonoBehaviour
{
    public Slider EnergySlider;
    public Gradient gradient;
    public Image fill;

    public void SetMaxSliderValue(Slider slider, int maxValue)
    {
        slider.maxValue = maxValue;
        slider.value = maxValue;
        fill.color = gradient.Evaluate(0.5f);
    }
    public void SetSliderValue(Slider slider, int value)
    {
        slider.value = value;
        fill.color = gradient.Evaluate(slider.normalizedValue);
    }

}
