﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;


public class RedZone : MonoBehaviour {

	public GameObject[] players;
	public GameObject[] AILine;

	public GameObject cam;
	public GameObject text;
	public AudioMixer audioMixer;
	public GameObject manager;

	// Use this for initialization
	void OnTriggerEnter2D (Collider2D player) {
		if (player.tag == "Player") {
		
			audioMixer.SetFloat("volume", -80f);

			FindObjectOfType<AudioManager>() .Play ("Death");

			text.SetActive (true);

			player.GetComponentInParent<Shoot> ().enabled = false;

			player.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			cam.GetComponent<MultipleTargetCam> ().targets.RemoveAt(0);


			manager.GetComponent<LoadTimer> ().timerActive = true;




			players = GameObject.FindGameObjectsWithTag ("Enemy");
			AILine = GameObject.FindGameObjectsWithTag ("AILine");

			for (var i = 0; i < players.Length; i++) {
				Destroy (players [i]);
			}

			for (var j = 0; j < AILine.Length; j++) {
				Destroy (AILine [j]);
			}
		
		}
	}
}