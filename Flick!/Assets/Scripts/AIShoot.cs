using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIShoot: MonoBehaviour {
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

        Invoke("MakeStatic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

		trail.time = Mathf.Infinity;
	
	}

	private void MakeStatic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }

    private void MakeDynamic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
    }

    private void MakeKinematic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }


	void Release(){
	
        Invoke("MakeKinematic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

		spawn = true;

		stateStress = false;

		AITurn = false;

		trail.enabled = true;

		GetComponent<CircleCollider2D> ().enabled = true;

		// Add the Force

		Vector3 dir = startPos - (Vector3)transform.position;

		transform.position = startPos;

		GetComponent<Rigidbody2D> ().AddForce (dir * force);

		FindObjectOfType<AudioManager>() .Play ("Click");

		Chance++;

		if (Chance >= 2){

			original.tag = "AIotherLine";

			Line = GameObject.FindGameObjectsWithTag ("AILine");

			for (var i = 0; i < Line.Length; i++) {

				Destroy (Line [i]);

			}

			original.tag = "AILine";

		}
	}

	void FixedUpdate(){
		
		AITurn = Opponent.GetComponent<Shoot>().turnDone;
	
		if (AITurn && Opponent.GetComponent<Speed>().speed < 0.01f){			
			Turn ();
			Opponent.GetComponent<Shoot> ().turnDone = false;
		}

		if (!stateStress && GetComponent<Speed>().speed < 0.01f && !printed){

			startPos = transform.position;

			stateStress = false;

			Instantiate (ball, startPos, Quaternion.identity);

			printed = true;

			spawn = false;
		}

		if (!stateStress && GetComponent<Speed>().speed < 0.01f){
            MakeStatic();
            MakeDynamic();
        }

		if (spawn)
			Instantiate (ball, transform.position, Quaternion.identity);

	}

	void Update () {	
	}


	void Turn () {
		if (AITurn) {
			GetComponent<CircleCollider2D> ().enabled = false;
		
			float radius = 1.8f;

			p = Random.insideUnitCircle.normalized * radius;

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
