using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadTimer : MonoBehaviour {

	public bool timerActive = false;

	public float time;

	public float wait = 2f;

	public bool done = false;

	void LoadMenu (){

		SceneManager.LoadScene("Menu");

	}
		
	// Update is called once per frame
	void Update ()
	{
		if (timerActive) {

			time += 1 * Time.deltaTime;

			if (time > wait) {

				timerActive = false;

				time = 0f;

				done = true;

				LoadMenu ();

			}
		}
	}
}
