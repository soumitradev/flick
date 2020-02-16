using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;


public class BlueZone : MonoBehaviour {

	public GameObject[] enemies;
	public GameObject[] AILine;

	public GameObject cam;
	public GameObject text;
	public AudioMixer audioMixer;
	public GameObject manager;

	// Use this for initialization
	void OnTriggerEnter2D (Collider2D enemy) {
		if (enemy.tag == "Enemy") {
		
			audioMixer.SetFloat("volume", -80f);

			FindObjectOfType<AudioManager>().Play ("Win");

			text.SetActive (true);

			enemy.GetComponentInParent<AIShoot>().enabled = false;
			//enemy.GetComponentInParent<Shoot> ().enabled = false;

			enemy.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			cam.GetComponent<MultipleTargetCam> ().targets.RemoveAt(0);


			manager.GetComponent<LoadTimer> ().timerActive = true;


			// Time.timeScale = 0f;


			// enemies = GameObject.FindGameObjectsWithTag ("Enemy");
			// AILine = GameObject.FindGameObjectsWithTag ("AILine");

			// for (var i = 0; i < enemies.Length; i++) {
        	// 	enemies[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
			// 	// Destroy (enemies [i]);
			// }

			// for (var j = 0; j < AILine.Length; j++) {
			// 	Destroy (AILine [j]);
			// }
		
		}
	}
}
