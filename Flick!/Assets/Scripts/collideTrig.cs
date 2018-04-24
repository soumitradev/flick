using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class collideTrig : MonoBehaviour {

	public GameObject[] players;
	public GameObject[] Line;
	public GameObject cam;
	public GameObject text;
	public AudioMixer audioMixer;
	public GameObject manager;


	void OnTriggerEnter2D (Collider2D enemy){




		if (enemy.tag == "Enemy") {

			audioMixer.SetFloat("volume", -80f);

			FindObjectOfType<AudioManager>() .Play ("Death");

			text.SetActive (true);

			enemy.GetComponentInParent<AIShoot> ().enabled = false;

			cam.GetComponent<MultipleTargetCam> ().targets.RemoveAt(1);

			manager.GetComponent<LoadTimer> ().timerActive = true;

			players = GameObject.FindGameObjectsWithTag ("Player");
			Line = GameObject.FindGameObjectsWithTag ("Line");


			for (var i = 0; i < players.Length; i++) {
				Destroy (players [i]);
			}

			for (var j = 0; j < Line.Length; j++) {
				Destroy (Line [j]);
			}



		}

	}

}
