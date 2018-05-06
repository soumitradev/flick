using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*  TODO:
 * ------------Post-Up------------
 *
 * https://play.google.com/store/apps/details?id=com.BlubirdLabs.Flick
 *
 * - Add Comments To Code
 * - Clean Up Code & Centralize
 * - Rename Variables / Code
 * - Beautify All Code
 * - Marketing
 * -----------------Next Version-----------
 * - Pause
 * *************************V2.0********************************
 * - Add Skins
 * - Add Local Multiplayer
 */

public class Shoot : MonoBehaviour
{


	public int Chance = 0;

	public bool stateStress = false;

	public bool turnDone = false;

	public bool printed = false;

	public bool spawn;


	public float force;

	public float deltaX, deltaY;

	public Vector3 startPos;

	public Vector3 refPos;

	public GameObject ball;

	public GameObject original;

	public GameObject[] Line;

	public TrailRenderer trail;

	// Use this for initialization

	void Start ()
	{
		startPos = transform.position;

		Invoke ("AllowPhysics", .1f);

		trail.time = Mathf.Infinity;
	}

	void AllowPhysics(){
		GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Kinematic;
		}

	// Update is called once per frame
	void OnMouseUp ()
	{
		spawn = true;

		stateStress = false;

		turnDone = true;

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

			original.tag = "otherLine";

			Line = GameObject.FindGameObjectsWithTag ("Line");

			for (var i = 0; i < Line.Length; i++) {

				Destroy (Line [i]);

			}

			original.tag = "Line";

		}
	}

	void FixedUpdate(){

		if (spawn)
			Instantiate (ball, transform.position, Quaternion.identity);

	}

	void Update ()
	{

		if (Input.touchCount > 0) {
		
			Touch touch = Input.GetTouch (0);

			switch (touch.phase) {

			case TouchPhase.Began:
				Turn (touch);
				break;
			case TouchPhase.Moved:
				Turn(touch);
				break;

			case TouchPhase.Ended:

				Release ();

				break;
		}

		if (!stateStress && GetComponent<Speed> ().speed <= 0.01f && !printed) {

			startPos = transform.position;

			stateStress = false;

			Instantiate (ball, startPos, Quaternion.identity);

			printed = true;

			spawn = false;

			GetComponent<Rigidbody2D> ().isKinematic = true;

			Invoke ("AllowPhysics", .1f);

		}
		}
	}



	void Release(){

			turnDone = true;

			spawn = true;

			stateStress = false;


			trail.enabled = true;

			GetComponent<CircleCollider2D> ().enabled = true;

			GetComponent<Rigidbody2D> ().isKinematic = false;

			// Add the Force

			Vector3 dir = startPos - (Vector3)transform.position;

			transform.position = startPos;

			GetComponent<Rigidbody2D> ().AddForce (dir * force);



			FindObjectOfType<AudioManager> ().Play ("Click");

			Chance++;

			if (Chance >= 2) {

				original.tag = "otherLine";

				Line = GameObject.FindGameObjectsWithTag ("Line");

				for (var i = 0; i < Line.Length; i++) {

					Destroy (Line [i]);

				}

				original.tag = "Line";

			}
	
		}


	void Turn(Touch touch){
		if (GetComponent<CircleCollider2D> ().OverlapPoint (touch.position)) {

			GetComponent<CircleCollider2D> ().enabled = false;

			Vector3 p = Camera.main.ScreenToWorldPoint (touch.position);

			if (!turnDone && GetComponent<Speed> ().speed <= 0.01f) {


				// Keep it in a certain radius


				float radius = 1.8f;

				Vector3 dir = p - startPos;

				if (dir.sqrMagnitude > radius) {

					dir = dir.normalized * radius;

				}

				// Set the Position

				transform.position = startPos + dir;

				stateStress = true;

				trail.enabled = false;

				printed = false;
			}

		}
	}

	void OnMouseDrag ()
	{
		// Convert mouse position to world position

		GetComponent<CircleCollider2D> ().enabled = false;

		Vector3 p = Camera.main.ScreenToWorldPoint (Input.mousePosition);

		// Keep it in a certain radius
		if (!turnDone) {

			float radius = 1.8f;

			Vector3 dir = p - startPos;

			if (dir.sqrMagnitude > radius) {

				dir = dir.normalized * radius;

			}

			// Set the Position

			transform.position = startPos + dir;

			stateStress = true;

			trail.enabled = false;

			printed = false;

		}
	}
}
