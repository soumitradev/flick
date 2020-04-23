using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class VideoFadingAudio: MonoBehaviour {
	// Texture to show while fading out
	public Texture2D fadeOutTexture;

	// Speed for fading out
	public float fadeSpeed = 0.8f;

	// Fade audio with display
	public AudioMixer audioMixer;

	// Depth to draw the texture at
	private int drawDepth = -1000;

	// Alpha of the texture
	private float alpha = 1.0f;

	// Direction of fade. Negative is fade in.
	private int fadeDir = -1;


	void OnGUI(){
		// Change the alpha
		alpha += fadeDir * fadeSpeed * Time.deltaTime;

		// Clamp the alpha value in [0, 1]
		alpha = Mathf.Clamp01(alpha);

		// Draw the texture on top with the new alpha
		GUI.color = new Color(GUI.color.r, GUI.color.g, GUI.color.b, alpha);
		GUI.depth = drawDepth;
		GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeOutTexture);
	}

	public float BeginFade(int direction){
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
		// Fade in
		BeginFade(-1);
	}
}
