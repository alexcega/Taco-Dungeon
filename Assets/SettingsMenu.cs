 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;
public class SettingsMenu : MonoBehaviour
{

    public AudioMixer audioMixer;
    public Slider yourSlider;

    void Awake()
    {
        yourSlider.value = PlayerPrefs.GetInt("sliderSavedNumber");
    }

    private void start ()
    {
        audioMixer.SetFloat("volume", PlayerPrefs.GetInt("sliderSavedNumber"));
    }

    void Update ()
    {
        PlayerPrefs.SetInt("sliderSavedNumber", (int)yourSlider.value);
    }
    public void SetVolume(float volume)
    {
        //Debug.Log(volume);
        audioMixer.SetFloat("volume", volume);
        //audioMixer.SetFloat("Volume", Mathf.Log10(volume) * 20);
    }
}
