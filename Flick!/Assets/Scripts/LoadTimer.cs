using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class LoadTimer : MonoBehaviour {

	public bool timerActive = false;

	public float time;

	public float wait = 2f;

	public bool done = false;

	public bool Testing = true;

	void Start () {
		Advertisement.Initialize ("1715289", Testing);
	}

	void LoadMenu (){

//#if UNITY_EDITOR 
//	StartCoroutine(WaitForAd());
//#endif

		if (Advertisement.IsReady()){
			Advertisement.Show ();
		}

		SceneManager.LoadScene("Menu");

	}

	/*IEnumerator WaitForAd()
	{
		float currentTimeScale = Time.timeScale;
		Time.timeScale = 0f;

		while (Advertisement.isShowing)
			yield return null;

		Time.timeScale = currentTimeScale;
	}
		*/
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
