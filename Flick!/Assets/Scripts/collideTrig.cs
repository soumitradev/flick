using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class collideTrig : MonoBehaviour {

	public GameObject[] players;
	public GameObject[] Line;
	public GameObject[] AILine;
	public GameObject cam;
	public GameObject text;
	public AudioMixer audioMixer;
	public GameObject manager;

	void OnTriggerEnter2D(Collider2D enemy){
		if (enemy.tag == "Enemy"){

			audioMixer.SetFloat("volume", -80f);

			FindObjectOfType<AudioManager>().Play("Death");

			text.SetActive (true);

			enemy.GetComponentInParent<AIShoot>().enabled = false;
			
			enemy.attachedRigidbody.bodyType = RigidbodyType2D.Static;

			cam.GetComponent<MultipleTargetCam>().targets.RemoveAt(1);

			manager.GetComponent<LoadTimer>().timerActive = true;

	
			// Time.timeScale = 0f;
			// players = GameObject.FindGameObjectsWithTag("Player");
			// Line = GameObject.FindGameObjectsWithTag("Line");
			// AILine = GameObject.FindGameObjectsWithTag ("AILine");


			// for (var i = 0; i < players.Length; i++) {
        	// 	players[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
			// 	// Destroy(players[i]);
			// }

			// for (var j = 0; j < AILine.Length; j++) {
			// 	Destroy(AILine[j]);
			// }
			// for (var k = 0; k < Line.Length; k++) {
			// 	Destroy(Line[k]);
			// }
		}

	}

}
