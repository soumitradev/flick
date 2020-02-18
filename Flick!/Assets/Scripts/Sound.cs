using UnityEngine.Audio;
using UnityEngine;

[System.Serializable]
public class Sound {
	// Name of sound
	public string name;

	// Audio of sound
	public AudioClip clip;

	// Volume of sound
	[Range(0f,1f)]
	public float volume;

	// Loop sound?
	public bool loop;

	// Source for sound
	[HideInInspector]
	public AudioSource source;
}
