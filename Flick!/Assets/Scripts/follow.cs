﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class follow : MonoBehaviour {

	// Use this for initialization

	public GameObject target;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = target.transform.position;
	}
}
