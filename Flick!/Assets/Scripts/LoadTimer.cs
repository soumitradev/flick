using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class LoadTimer: MonoBehaviour {
	// Boolean to show if timer is running
	public bool timerActive = false;

	// Amount of time passed since start of timer
	public float time;

	// Amount of time to wait
	public float wait = 2f;

	// Boolean to show if timer is done
	public bool done = false;

	// Boolean to show if testing is going on so we can skip ads
	public bool Testing = true;

	void Start(){
		// On starting the timer, play an ad
		Advertisement.Initialize("1715289", Testing);
	}

	void LoadMenu(){
		// When the user wants free coins, play an ad
		if (Advertisement.IsReady("video")){
			Advertisement.Show("video");
		}

		// Load menu after ad
		SceneManager.LoadScene("Menu");
	}
	
	void Update(){
		// If timer is active, move timer ahead
		if (timerActive){

			// Increment time by deltaTime (deltaTime is the anount of real world time between every frame)
			time += 1 * Time.deltaTime;

			// If timer is over,
			if (time > wait){
				// Timer is no more active
				timerActive = false;

				// Rest time
				time = 0f;

				// Timer is done
				done = true;

				// Load the menu
				LoadMenu();
			}
		}
	}
}
