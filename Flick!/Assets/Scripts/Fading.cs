﻿using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Fading: MonoBehaviour {
	// Texture to fade into
	public Texture2D fadeOutTexture;

	// Speed of fade
	public float fadeSpeed = 0.8f;

	// Depth to draw texture at (negative is above evrything else)
	private int drawDepth = -1000;

	// Alpha of texture
	private float alpha = 1.0f;

	// Direction of fade
	private int fadeDir = -1;

	void OnGUI(){
		// Change alpha according to params
		alpha += fadeDir * fadeSpeed * Time.deltaTime;

		// Clamp alpha between 0 and 1
		alpha = Mathf.Clamp01(alpha);

		// Draw the Texture
		GUI.color = new Color(GUI.color.r, GUI.color.g, GUI.color.b, alpha);
		GUI.depth = drawDepth;
		GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeOutTexture);
	}

	public float BeginFade(int direction){
		// Start fade
		fadeDir = direction;
		return(fadeSpeed);
	}

	void OnEnable(){
		SceneManager.sceneLoaded += OnLevelFinishedLoading;
	}

	void OnDisable(){
		SceneManager.sceneLoaded -= OnLevelFinishedLoading;
	}

	void OnLevelFinishedLoading(Scene scene, LoadSceneMode mode){
		// Start fade
		BeginFade(-1);
	}
}
