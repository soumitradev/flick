using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdManager: MonoBehaviour {
	public bool Testing = true;

	void Start(){
		Advertisement.Initialize("1715289", Testing);
	}
}
