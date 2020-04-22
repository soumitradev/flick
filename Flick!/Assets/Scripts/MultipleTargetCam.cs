using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Require camera because duh
[RequireComponent(typeof(Camera))]
public class MultipleTargetCam: MonoBehaviour {
	// List of targets
	public List<Transform> targets;

	// Offset from targets
	public Vector3 offset;

	// Velocity of camera while moving
	private Vector3 velocity;

	// Smoothening coefficient
	public float smoothTime = .5f;

	// Minimum zoon for camera
	public float minZoom;

	// Maximum zoom for camera
	public float maxZoom;

	// Limit for zooming
	public float zoomLim;

	// Camera object
	private Camera cam;
	
	void Start(){
		// Get camera component on camera object
		cam = GetComponent<Camera>();
	}
	
	void LateUpdate(){
		// If no targets, then just exit
		if (targets.Count == 0){
			return;
		}
		
		// Move and zoom according to targets
		Move();
		Zoom();
	}

	void Zoom(){
		// Interpolate smoothly between maxZoom, minZoom
		float newZoom = Mathf.Lerp(maxZoom, minZoom, GetBounds().size.x / zoomLim);

		// Set zoom
		cam.orthographicSize = newZoom;	
	}

	void Move(){
		// Get center point of targets and add offset to it
		Vector3 CenterPoint = GetCenter();
		Vector3 NewPos = CenterPoint + offset;

		// Move the transform smoothly to the new position
		transform.position = Vector3.SmoothDamp(transform.position, NewPos, ref velocity, smoothTime);	
	}
	
	Vector3 GetCenter(){
		// If only 1 object, return its position directly
		if (targets.Count == 1) {			
			return targets[0].position;		
		}

		// Return center of bounds
		return GetBounds().center;
	}

	Bounds GetBounds(){
		var bounds = new Bounds(targets[0].position, Vector3.zero);

		// Add all targets to bounds
		for (int i = 0; i < targets.Count; i++){
			bounds.Encapsulate(targets[i].position);
		}

		return bounds;
	}
}