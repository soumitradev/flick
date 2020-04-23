using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class CollideTrig: MonoBehaviour {
	// The player
	// public GameObject[] players;
	// The circles of the line
	// public GameObject[] Line;
	// The circles of the AI line
	// public GameObject[] AILine;

	// Camera object
	public GameObject cam;
	// Winning text
	public GameObject text;
	// Audio player
	public AudioMixer audioMixer;
	// Stopwatch manager
	public GameObject manager;

	void OnTriggerEnter2D(Collider2D enemy){
		// If the body that enters the blue zone is the AI, play the death sound
		if (enemy.tag == "Enemy"){
			// audioMixer.SetFloat("volume", -80f);
			FindObjectOfType<AudioManager>().Play("Death");

			// Show winning text
			text.SetActive(true);

			// Stop the AI from making any moves
			enemy.GetComponentInParent<AIShoot>().enabled = false;			
			enemy.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			// Remove AI from camera targets
			if (cam.GetComponent<MultipleTargetCam>().targets.Count > 1){
				cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(1);
			}

			// Start the timer for the game over text
			manager.GetComponent<LoadTimer>().timerActive = true;
	
			/*
			// Stop time, and assign gameobjects to respective vars
			Time.timeScale = 0f;
			players = GameObject.FindGameObjectsWithTag("Player");
			Line = GameObject.FindGameObjectsWithTag("Line");
			AILine = GameObject.FindGameObjectsWithTag ("AILine");


			// Destroy players
			for (var i = 0; i < players.Length; i++) {
        		players[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
				// Destroy(players[i]);
			}

			// Destroy all AI lines
			for (var j = 0; j < AILine.Length; j++) {
				Destroy(AILine[j]);
			}

			// Destroy all player lines
			for (var k = 0; k < Line.Length; k++) {
				Destroy(Line[k]);
			}
			*/
		}
	}
}
