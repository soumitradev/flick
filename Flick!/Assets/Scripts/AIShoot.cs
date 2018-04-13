using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIShoot : MonoBehaviour 
{
	public bool AITurn = false;

	public GameObject Opponent;

	public Vector3 startPos;

	public Vector3 p;

	public float force = 200;

	public bool stateStress = false;

	public TrailRenderer trail;

	public int Chance = 0;

	public GameObject[] Line;

	public GameObject original;

	public bool spawn;

	public GameObject ball;

	public bool printed;



	void Start(){
	
		startPos = transform.position;

		trail.time = Mathf.Infinity;
	
	}

	void Release(){


		spawn = true;

		stateStress = false;

		AITurn = false;

		trail.enabled = true;

		GetComponent<CircleCollider2D> ().enabled = true;

		GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Dynamic;

		// Add the Force

		Vector3 dir = startPos - (Vector3)transform.position;

		transform.position = startPos;

		GetComponent<Rigidbody2D> ().AddForce (dir * force);

		FindObjectOfType<AudioManager>() .Play ("Click");

		Chance++;

		if (Chance >= 2) {

			original.tag = "AIotherLine";

			Line = GameObject.FindGameObjectsWithTag ("AILine");

			for (var i = 0; i < Line.Length; i++) {

				Destroy (Line [i]);

			}

			original.tag = "AILine";

		}
	}

	void FixedUpdate () {


		if (spawn)
			Instantiate (ball, transform.position, Quaternion.identity);

		AITurn = Opponent.GetComponent<Shoot> ().turnDone;
	
		if (Opponent.GetComponent<Speed>().speed == 0 && AITurn) {
			
			Turn ();

			Opponent.GetComponent<Shoot> ().turnDone = false;

		}

		if (!stateStress && GetComponent<Speed> ().speed == 0 && !printed) {

			startPos = transform.position;

			stateStress = false;

			Instantiate (ball, startPos, Quaternion.identity);

			printed = true;

			spawn = false;

			GetComponent<Rigidbody2D> ().isKinematic = true;

		}
	
	}


	void Turn(){

		GetComponent<CircleCollider2D> ().enabled = false;

		if (AITurn) {
			
			float radius = 1.5f;

			p = new Vector3 ((radius * Random.Range (-1.11f, 1.11f)),(radius * Random.Range (-1.11f, 1.11f)));

			Vector3 dir = p - startPos;
	
			if (dir.sqrMagnitude > radius)
				dir = dir.normalized * radius;


			// Set the Position

			transform.position = startPos + dir;

			stateStress = true; 

			trail.enabled = false;

			printed = false;

			Invoke ("Release", 1f);

		}
	}
}