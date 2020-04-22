using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdManager: MonoBehaviour {
	// Set boolean to show if app is still in development
	public bool Testing = true;

	void Start(){
		// Load ad
		Advertisement.Initialize("1715289", Testing);
	}
}
