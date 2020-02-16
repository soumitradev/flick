using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]

public class MultipleTargetCam: MonoBehaviour {
	public List<Transform> targets;
	public Vector3 offset;
	private Vector3 velocity;
	public float smoothTime = .5f;
	public float minZoom = 100f;
	public float maxZoom = 1f;
	public float zoomLim = Mathf.Infinity;

	private Camera cam;
	
	void Start(){
		cam = GetComponent<Camera>();
	}
	
	void LateUpdate(){
		if (targets.Count == 0){
			return;
		}
		
		Move();
		Zoom();
	}



	void Zoom(){
		float newZoom = Mathf.Lerp(maxZoom, minZoom, GetMaxDist() / zoomLim);
		cam.orthographicSize = newZoom;	
	}



	void Move(){
		Vector3 CenterPoint = GetCenter();
		Vector3 NewPos = CenterPoint + offset;
		transform.position = Vector3.SmoothDamp(transform.position, NewPos, ref velocity, smoothTime);	
	}

	float GetMaxDist(){
		var bounds = new Bounds(targets[0].position, Vector3.zero);

		for (int i = 0; i < targets.Count; i++){
			bounds.Encapsulate(targets[i].position);
		}

		return (bounds.size.x * bounds.size.y / 10f) + 5f;
	}

	Vector3 GetCenter(){
		if (targets.Count == 1) {			
			return targets[0].position;		
		}

		var bounds = new Bounds(targets[0].position, Vector3.zero);

		for (int i = 0; i < targets.Count; i++){		
			bounds.Encapsulate(targets[i].position);		
		}

		return bounds.center;
	}
}