using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class BlueZone: MonoBehaviour {
	// List of all enemy
	// public GameObject[] enemies;
	// List of AI lines
	// public GameObject[] AILine;
	// Camera
	public GameObject cam;
	// Winning text
	public GameObject text;
	// Audio player
	// public AudioMixer audioMixer;
	// Stopwatch manager
	public GameObject manager;

	void OnTriggerEnter2D(Collider2D enemy){
		// If enemy enters blue zone, make player win
		if (enemy.tag == "Enemy"){
			// Play winning sound
			// audioMixer.SetFloat("volume", -80f);
			FindObjectOfType<AudioManager>().Play("Win");

			// Show win text
			text.SetActive(true);

			// Stop enemy from making any more moves
			enemy.GetComponentInParent<AIShoot>().enabled = false;
			enemy.attachedRigidbody.bodyType = RigidbodyType2D.Static;
			
			// Remove enemy from camera targets
			if (cam.GetComponent<MultipleTargetCam>().targets.Count > 0){
				cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(0);
			}
			
			// Start timer to time showing of win text
			manager.GetComponent<LoadTimer>().timerActive = true;

			/*
			// Stop time
			Time.timeScale = 0f;

			// Kill everything realted to AI
			enemies = GameObject.FindGameObjectsWithTag("Enemy");
			AILine = GameObject.FindGameObjectsWithTag("AILine");

			for (var i = 0; i < enemies.Length; i++){
        		enemies[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
				// Destroy(enemies[i]);
			}

			for (var j = 0; j < AILine.Length; j++){
				Destroy(AILine[j]);
			}
			*/
		
		}
	}
}
