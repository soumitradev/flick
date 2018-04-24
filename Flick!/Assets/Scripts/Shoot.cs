using System.Collections;
using System.Collections.Generic;
using UnityEngine;

 /*  TODO: 
 * - Create World Limits
 * - Polish The Multi-Target Cam
 * - Add Ads
 * - Add Tutorial
 * - Check Display Compatibility
 * - Upload To Play Store
 * ------------Post-Up------------
 * - Add Comments To Code
 * - Clean Up Code
 * - Rename Variables / Code
 * - Beautify All Code
 * - Marketing
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
		startPos = transform.position;

		trail.time = Mathf.Infinity;
	}
	
	// Update is called once per frame
	void OnMouseUp ()
	{
		GetComponent<CircleCollider2D> ().enabled = true;

		// Disable isKinematic

		GetComponent<Rigidbody2D> ().isKinematic = false;

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

		if (spawn)
			Instantiate (ball, transform.position, Quaternion.identity);

		if (!stateStress && GetComponent<Speed> ().speed == 0 && !printed) {

			startPos = transform.position;

			stateStress = false;

			Instantiate (ball, startPos, Quaternion.identity);

			printed = true;

			spawn = false;

			GetComponent<Rigidbody2D> ().isKinematic = true;

		}			
	}

	void OnMouseDrag ()
	{
		// Convert mouse position to world position

		GetComponent<CircleCollider2D> ().enabled = false;

		Vector3 p = Camera.main.ScreenToWorldPoint (Input.mousePosition);

		// Keep it in a certain radius
		if (!turnDone) {

			float radius = 1.5f;

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