using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class AdLoader : MonoBehaviour {

	public bool Testing = true;

	public GameObject WaitText;

	public GameObject Darken;

	public GameObject FailText;

	public bool timerActive = false;

	public float time;

	public float wait = 2f;

	public bool done = false;

	public bool newCoin;

	public int coinTemp;

	public Text CoinText;

	void Start () {

		CoinText.text = PlayerPrefs.GetInt ("Coins") + " Coins";


		if (PlayerPrefs.GetInt ("Coins") == 0) {

			PlayerPrefs.SetInt ("Coins", 0);
		
			CoinText.text = PlayerPrefs.GetInt ("Coins") + " Coins";

			newCoin = true;
		
		}

		Advertisement.Initialize ("1715289", Testing);
	}

	// Update is called once per frame
	public void Play_Ad () {
		if (Advertisement.IsReady ()) {
			Advertisement.Show ();
		}
	}
	public void Play_Rewarded_Ad () {

		ShowOptions options = new ShowOptions ();
		options.resultCallback = AdCallbackhandler;

		if (Advertisement.IsReady ("rewardedVideo")) {
			WaitText.SetActive (false);
			Advertisement.Show ("rewardedVideo", options);
		} 
		else{
			WaitText.SetActive (true);
			Darken.SetActive (true);
		}
	}

	void AdCallbackhandler (ShowResult result)
	{
		switch(result)
		{
		case ShowResult.Finished:
			if (!newCoin) {
				
				coinTemp = (PlayerPrefs.GetInt ("Coins"));

				coinTemp += 5;

				PlayerPrefs.SetInt ("Coins", coinTemp);

				CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";
			
			} else {
			
				PlayerPrefs.SetInt("Coins", 5);

				CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";

				newCoin = false;
			
			}

			WaitText.SetActive (false);
			Darken.SetActive (false);
			break;
		case ShowResult.Failed:
			FailText.SetActive (true);
			timerActive = true;
			break;
		}
	}

	void Update(){

		if (timerActive) {
		
			time += 1 * Time.deltaTime;

			if (time > wait) {

				timerActive = false;

				time = 0f;

				done = true;

				FailText.SetActive (false);

			}
		
		}

	}

}
