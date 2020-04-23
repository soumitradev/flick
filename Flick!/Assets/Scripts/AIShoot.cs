using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIShoot: MonoBehaviour {
	// Boolean for the turn of AI
	public bool AITurn = false;
	// Opponent game object
	public GameObject Opponent;
	// Position of where the AI shoots from
	public Vector3 startPos;
	// Temporary vector
	public Vector3 p;
	// Force constant to apply on playr on releasing
	public float force = 200;
	// Boolean to tell if the player has been pulled but not released
	public bool stateStress = false;
	// Trail renderer that renders the trail
	public TrailRenderer trail;
	// Index of which chance is going on
	public int Chance = 0;
	// The list of line objects
	public GameObject[] Line;
	// The reference AI line object
	public GameObject original;
	// Boolean to tell if player should spawn the line objects
	public bool spawn;
	// The reference AI line object that we make copies of
	public GameObject ball;
	// Temporary variable that makes us run code in FixedUpdate only once.
	public bool printed;

	void Start(){
		// Start at the current position
		startPos = transform.position;

		// Allow for some weird physics thing to work
        Invoke("MakeStatic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

		// Make the trailrenderer render a trail for an infinite time
		trail.time = Mathf.Infinity;	
	}
	
	// Make player Static
	private void MakeStatic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }

	// Make player Dynamic
    private void MakeDynamic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
    }

	// Make player Kinematic
    private void MakeKinematic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }

	void Release(){	
		// On releasing, allow for some weird physics thing to work
        Invoke("MakeKinematic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

		// Let the player spawn line objects
		spawn = true;
		// The player is no longer being pulled
		stateStress = false;
		// It is no more AI's turn
		AITurn = false;
		// Make the player render the trail
		trail.enabled = true;

		// Enable the collider of the player so it can bump into things and die or win
		GetComponent<CircleCollider2D>().enabled = true;
		
		// Get the direction in which it is supposed to move, and place it back where it's supposed to start
		Vector3 dir = startPos - (Vector3) transform.position;
		transform.position = startPos;

		// Apply the force on the player to make it move.
		GetComponent<Rigidbody2D>().AddForce(dir * force);

		// Play the click sound on releasing
		FindObjectOfType<AudioManager>().Play("Click");

		// Increase the chance count
		Chance++;

		// If the chance is more than the second one,
		if (Chance >= 2){
			// Set the tag of the reference AI line object to some other tag
			original.tag = "AIotherLine";
			// Get all non reference AI line objects
			Line = GameObject.FindGameObjectsWithTag("AILine");

			// Destroy the old line objects
			for (var i = 0; i < Line.Length; i++){
				Destroy(Line[i]);
			}
			// Set the tag of the original reference AI line object to what it's supposed to be
			original.tag = "AILine";
		}
	}

	void FixedUpdate(){
		// If user's turn is done, let AI play
		AITurn = Opponent.GetComponent<Shoot>().turnDone;

		// If the opponent has slowed down, and it is AI's turn, make a turn.
		if (AITurn && Opponent.GetComponent<Speed>().speed < 0.01f){			
			Turn();
			// Let user play after AI's turn
			Opponent.GetComponent<Shoot>().turnDone = false;
		}

		// If the player has stopped, create a checkpoint for the player to shoot from
		if (!stateStress && GetComponent<Speed>().speed < 0.01f && !printed){
			startPos = transform.position;

			stateStress = false;

			Instantiate(ball, startPos, Quaternion.identity);

			printed = true;
			spawn = false;
		}

		// Allow for some weird physics thing to work
		if (!stateStress && GetComponent<Speed>().speed < 0.01f){
            MakeStatic();
            MakeDynamic();
        }

		// If the player is supposed to spawn line objects, spawn them.
		if (spawn){
			Instantiate(ball, transform.position, Quaternion.identity);
		}
	}

	void Update(){	
	}

	void Turn(){
		// If the turn is the AI's, 
		if (AITurn){
			// Disable player's collider so that it doesn't hit
			// any zone or line
			GetComponent<CircleCollider2D>().enabled = false;

			// Keep player in radius
			float radius = 1.8f;
			p = Random.insideUnitCircle.normalized * radius;
			Vector3 dir = p - startPos;

			if (dir.sqrMagnitude > radius){
				dir = dir.normalized * radius;
			}

			// Keep the player in the limited radius
			transform.position = startPos + dir;

			// Set booleans
			stateStress = true;
			trail.enabled = false;
			printed = false;
			
			// After 1 second, release
			Invoke("Release", 1f);
		}
	}
}
