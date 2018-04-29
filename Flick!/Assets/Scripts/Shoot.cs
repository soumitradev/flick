using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*  TODO: 
 * - Check Display Compatibility
 * - Upload To Play Store
 * ------------Post-Up------------
 * - Add Comments To Code
 * - Clean Up Code
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

	public Vector3 startPos;

	public float force;

	public bool stateStress = false;

	public bool turnDone = false;

	public TrailRenderer trail;

	public GameObject ball;

	public bool printed = false;

	public bool spawn;

	public GameObject[] Line;

	public int Chance = 0;

	public GameObject original;

	// Use this for initialization


	void Start ()
	{
		//GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Kinematic;

		startPos = transform.position;

		Invoke ("AllowPhysics", 1f);

		trail.time = Mathf.Infinity;
	}

	void AllowPhysics(){

		GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Kinematic;

	}

	// Update is called once per frame
	void OnMouseUp ()
	{
		GetComponent<CircleCollider2D> ().enabled = true;

		// Disable isKinematic

		GetComponent<Rigidbody2D> ().isKinematic = false;

		GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Dynamic;

		// Add the Force

		Vector3 dir = startPos - (Vector3)transform.position;

		transform.position = startPos;

		spawn = true;

		GetComponent<Rigidbody2D> ().AddForce (dir * force);

		stateStress = false;

		turnDone = true;

		trail.enabled = true;

		Chance++;

		FindObjectOfType<AudioManager>() .Play ("Click");
		if (Chance >= 2) {

			original.tag = "otherLine";

			Line = GameObject.FindGameObjectsWithTag ("Line");

			for (var i = 0; i < Line.Length; i++) {

				Destroy (Line [i]);

			}

			original.tag = "Line";

		}
	}

	void Update ()
	{
		if (!stateStress && GetComponent<Speed> ().speed == 0 && Chance>0)
			GetComponent<Rigidbody2D> ().isKinematic = true;

		if (spawn)
			Instantiate (ball, transform.position, Quaternion.identity);

		if (!stateStress && GetComponent<Speed> ().speed == 0 && !printed) {

			startPos = transform.position;

			stateStress = false;

			Instantiate (ball, startPos, Quaternion.identity);



			spawn = false;


			printed = true;
		}			
	}

	void OnMouseDrag ()
	{
		// Convert mouse position to world position

		GetComponent<CircleCollider2D> ().enabled = false;

		GetComponent<Rigidbody2D> ().bodyType = RigidbodyType2D.Kinematic;

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