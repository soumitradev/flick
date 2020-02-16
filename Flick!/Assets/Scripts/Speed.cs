using UnityEngine;


public class Speed : MonoBehaviour
{
	public float speed = 0f;


	Vector3 lastPosition = Vector3.zero;
	void FixedUpdate()
	{
		speed = (transform.position - lastPosition).magnitude;
		lastPosition = transform.position;
	}

}