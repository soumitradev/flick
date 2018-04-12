﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*  TODO: 
 * - Create System For Multiple Dots
 * - Polish The Multi-Target Cam
 * - Add Ads
 * - Add Tutorial
 * - Create World Limits
 * - Clean Up Code
 * - Rename Variables / Code
 * - Beautify All Code
 * - Add Comments To Code
 * - Greate A Git
 * - Change Input To Touch
 * - Check Display Compatibility
 * - Upload To Play Store
 * - Marketing
 * *************************V2.0********************************
 * - Add Skins
 * - Add Local Multiplayer
 * ////////////////////////////Later, Maybe After Figuring Out In-App-Purchases
 * - Add Powerups
 * - Shop for powerups
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

	public bool secondChance = false;

	public bool firstChance;

	public GameObject original;

	// Use this for initialization

	void Start ()
	{
		startPos = transform.position;

		trail.time = Mathf.Infinity;

		firstChance = true;
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

		firstChance = false;

		trail.enabled = true;

		FindObjectOfType<AudioManager>() .Play ("Click");
		if (secondChance) {

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

		if (!firstChance) {
			secondChance = true;
		}

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