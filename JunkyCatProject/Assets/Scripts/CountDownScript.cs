using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CountDownScript : MonoBehaviour
{
    public TextMeshProUGUI CountText;
    int count;
    public delegate void StartGame();
    public static event StartGame StartGo;

    // Start is called before the first frame update

    private void Awake()
    {
        count = 3;
    }
    void Start()
    {
        StartCoroutine(CountDown());   
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator CountDown()
    {
        while (count > 0)
        {
            CountText.text = count.ToString();
            yield return new WaitForSeconds(1);
            count--;
        }
        CountText.text = "GO!";
        yield return new WaitForSeconds(1);

        gameObject.SetActive(false);

        if(StartGo != null)
            StartGo();
    }
}
