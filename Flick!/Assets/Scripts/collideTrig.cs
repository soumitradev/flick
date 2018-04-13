using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collideTrig : MonoBehaviour {

	public GameObject[] players;
	public GameObject[] Line;
	public GameObject cam;


	void OnTriggerEnter2D (Collider2D enemy){

		if (enemy.tag == "Enemy") {
			players = GameObject.FindGameObjectsWithTag ("Player");
			Line = GameObject.FindGameObjectsWithTag ("Line");

			for (var i = 0; i < players.Length; i++) {
				Destroy (players [i]);
			}

			for (var j = 0; j < Line.Length; j++) {
				Destroy (Line [j]);
			}

			FindObjectOfType<AudioManager>() .Play ("Death");

			enemy.GetComponentInParent<AIShoot> ().enabled = false;

			cam.GetComponent<MultipleTargetCam> ().targets.RemoveAt(1);

		}
	}
}
