using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdLoader : MonoBehaviour {

	public bool Testing = true;

	void Start () {
		Advertisement.Initialize ("1715289", Testing);
	}

	// Update is called once per frame
	public void Play_Ad () {
		Advertisement.Show ();
	}
}
