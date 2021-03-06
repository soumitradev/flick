﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class AdLoader: MonoBehaviour {
	// If app is still in development, ad is not loaded - only a placeholder is.
	public bool Testing = true;

	// Text to show while loading ad
	public GameObject WaitText;

	// Gradient to pull over everything else when loading ad
	public GameObject Darken;

	// Text to show when loading ad fails
	public GameObject FailText;

	// Boolean for if timer to load ad is on
	public bool timerActive = false;
	// Timer
	public float time;
	// Amount of time to wait for when loading ad
	public float wait = 2f;
	// Boolean for if time is up
	public bool done = false;
	// Boolean if user has earned new coins
	public bool newCoin;
	// Temporary storage in memory for number of coins
	public int coinTemp;
	// Text that shows number of coins the user has
	public Text CoinText;

	void Start(){
		// Set the text for coins
		CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";

		// tbh I have no idea what this does. It looks wrong,
		// but I'm too scared to change it since it works.
		if (PlayerPrefs.GetInt("Coins") == 0){
			PlayerPrefs.SetInt("Coins", 0);		
			CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";

			newCoin = true;		
		}
		Advertisement.Initialize("1715289", Testing);
	}

	public void Play_Ad(){
		// Play ad
		if (Advertisement.IsReady()){
			Advertisement.Show();
		}
	}

	public void Play_Rewarded_Ad(){
		// Play ad but add coins to player
		ShowOptions options = new ShowOptions();
		options.resultCallback = AdCallbackhandler;

		if (Advertisement.IsReady("rewardedVideo")){
			WaitText.SetActive(false);
			Advertisement.Show("rewardedVideo", options);
		} else {
			WaitText.SetActive(true);
			Darken.SetActive(true);
		}
	}

	void AdCallbackhandler(ShowResult result){
		switch(result){
			case ShowResult.Finished:
				if (!newCoin){
					// If coin already exists in storage, add 5 coins
					coinTemp = PlayerPrefs.GetInt("Coins");
					coinTemp += 5;
					PlayerPrefs.SetInt("Coins", coinTemp);
					CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";
				} else {
					// If coin doesn't exist in storage, create a permanent place to store coins
					PlayerPrefs.SetInt("Coins", 5);
					CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";

					newCoin = false;				
				}

				// Hide the ad waiting UI
				WaitText.SetActive(false);
				Darken.SetActive(false);

			break;

			case ShowResult.Failed:
			// If playing ad failed, tell the user it failed.
				FailText.SetActive(true);
				timerActive = true;
			break;
		}
	}

	void Update(){
		// Make the timer tick
		if (timerActive){		
			time += 1 * Time.deltaTime;

			if (time > wait){
				timerActive = false;
				time = 0f;
				done = true;
				
				FailText.SetActive(false);
			}
		}
	}
}
