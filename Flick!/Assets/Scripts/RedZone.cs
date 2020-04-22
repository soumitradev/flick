using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;


public class RedZone: MonoBehaviour {
	// List of players (the user)
	// public GameObject[] players;

	// List of line collider objects for AI
	// public GameObject[] AILine;

	// Camera
	public GameObject cam;

	// Text to show when player hits RedZone
	public GameObject text;

	// Mixer for audio
	public AudioMixer audioMixer;

	// Time manager
	public GameObject timeManager;

	// Enemy (AI) object
	public GameObject enemy;
	
	void OnTriggerEnter2D(Collider2D player){
		// If the object that collides with the RedZone is the player,
		if (player.tag == "Player") {
			// Play audio for death
			audioMixer.SetFloat("volume", -80f);
			FindObjectOfType<AudioManager>().Play("Death");

			// Losing text should be active
			text.SetActive(true);

			// Disable the shooting scripts to disable any more moves
			player.GetComponentInParent<Shoot>().enabled = false;
			enemy.GetComponentInParent<AIShoot>().enabled = false;

			// Make player stop
			player.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			// Remove player from target of camera
			if (cam.GetComponent<MultipleTargetCam>().targets.Count > 0){
				cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(0);
			}

			// Turn on timer and show menu
			timeManager.GetComponent<LoadTimer>().timerActive = true;

			/* 
			// Pause time
			Time.timeScale = 0f;
			
			// Make list of AILine objects and players
			players = GameObject.FindGameObjectsWithTag("Enemy");
			AILine = GameObject.FindGameObjectsWithTag("AILine");

			// Destroy all players
			for (var i = 0; i < players.Length; i++) {
        		players[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
				Destroy(players[i]);
			}

			// Destroy all AILines
			for (var j = 0; j < AILine.Length; j++) {
				Destroy(AILine[j]);
			}
			*/
		}
	}
}
