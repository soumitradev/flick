using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class AICollideTrig: MonoBehaviour {
	// public GameObject[] players;
	// public GameObject[] AILine;
	// public GameObject[] Line;
	public GameObject cam;
	public GameObject text;
	public AudioMixer audioMixer;
	// public float volumeFX;
	// public AudioMixer SFX;
	public GameObject manager;
	public GameObject enemy;

	void OnTriggerEnter2D(Collider2D player){
		if (player.tag == "Player"){
			audioMixer.SetFloat("volume", -80f);
			FindObjectOfType<AudioManager>().Play("Win");

			text.SetActive(true);
			
			enemy.GetComponentInParent<AIShoot>().enabled = false;
			player.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			player.GetComponentInParent<Shoot>().enabled = false;

			if (cam.GetComponent<MultipleTargetCam>().targets.Count > 0){
				cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(0);
			}

			manager.GetComponent<LoadTimer>().timerActive = true;
			
			/*
			Time.timeScale = 0f;

			players = GameObject.FindGameObjectsWithTag("Enemy");
			AILine = GameObject.FindGameObjectsWithTag("AILine");
			Line = GameObject.FindGameObjectsWithTag("Line");

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
