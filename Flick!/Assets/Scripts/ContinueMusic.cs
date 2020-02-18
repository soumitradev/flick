using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContinueMusic: MonoBehaviour {
	void Awake(){
		// Get all music objects
		GameObject[] objs = GameObject.FindGameObjectsWithTag("Music");

		// Delete all music objects so we have only one sound playing
		if (objs.Length > 1){
			Destroy(this.gameObject);
		}

		// Don't destroy music objects, restart them in a don't destoy scene
		DontDestroyOnLoad(this.gameObject);
	}
}
