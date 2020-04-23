using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class AICollideTrig: MonoBehaviour {
	// List of player, AI line and line
	// public GameObject[] players;
	// public GameObject[] AILine;
	// public GameObject[] Line;

	// Camera
	public GameObject cam;
	// Winning text
	public GameObject text;
	// Audio player
	public AudioMixer audioMixer;
	
	// public float volumeFX;
	// public AudioMixer SFX;
	public GameObject manager;
	// Enemy object
	public GameObject enemy;

	void OnTriggerEnter2D(Collider2D player){
		// If player enters the AI line,
		if (player.tag == "Player"){
			// Play the win sound
			// audioMixer.SetFloat("volume", -80f);
			FindObjectOfType<AudioManager>().Play("Win");

			// Enable winning text
			text.SetActive(true);
			
			// Stop player and enemy from moving
			enemy.GetComponentInParent<AIShoot>().enabled = false;
			player.attachedRigidbody.bodyType = RigidbodyType2D.Static;
			player.GetComponentInParent<Shoot>().enabled = false;

			// Remove enemy from camera targets
			if (cam.GetComponent<MultipleTargetCam>().targets.Count > 0){
				cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(0);
			}

			// Enable timer for managing length of showing text
			manager.GetComponent<LoadTimer>().timerActive = true;
			
			/*
			// Stop time
			Time.timeScale = 0f;

			// Add all objects to their own lists
			players = GameObject.FindGameObjectsWithTag("Enemy");
			AILine = GameObject.FindGameObjectsWithTag("AILine");
			Line = GameObject.FindGameObjectsWithTag("Line");

			// Destroy each object type
			for (var i = 0; i < players.Length; i++){
        		players[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
				// Destroy(players[i]);
			}

			for (var j = 0; j < AILine.Length; j++){
				Destroy(AILine[j]);
			}

			for (var k = 0; k < Line.Length; k++){
				Destroy(Line[k]);
			}
			*/
		}
	}
}
