using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIcollideTrig : MonoBehaviour {

	public GameObject[] players;
	public GameObject[] AILine;


	void OnTriggerEnter2D (Collider2D player){

		if (player.tag == "Player") {
			players = GameObject.FindGameObjectsWithTag ("Enemy");
			AILine = GameObject.FindGameObjectsWithTag ("AILine");

			for (var i = 0; i < players.Length; i++) {
				Destroy (players [i]);
			}

			for (var j = 0; j < AILine.Length; j++) {
				Destroy (AILine [j]);
			}
			FindObjectOfType<AudioManager>() .Play ("Win");
		}
	}
}
