using UnityEngine;

public class Speed: MonoBehaviour {
	// Float that represents speed of the player
	public float speed = 0f;

	// Previous position
	Vector3 lastPosition = Vector3.zero;

	void FixedUpdate(){
		// Speed is change in position
		speed = (transform.position - lastPosition).magnitude;

		// Set previous position to current position for next frame
		lastPosition = transform.position;
	}
}