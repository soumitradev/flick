using System;
using UnityEngine;
using UnityEngine.Audio;

public class AudioManager: MonoBehaviour {
	// List of sounds that can be played
	public Sound[] sounds;
	// Volume control
	public AudioMixerGroup volume;

	void Awake(){
		// For each sound, set up an AudioSource, and set metadata
		foreach(Sound s in sounds){
			s.source = gameObject.AddComponent<AudioSource>();
			s.source.clip = s.clip;
			s.source.volume = s.volume;
			s.source.loop = s.loop;
			s.source.outputAudioMixerGroup = volume;
		}
	}

	public void Play(string name){
		// Find sound in array of sounds
		Sound s = Array.Find(sounds, sound => sound.name == name);

		// If sound is not found, show warning in console.
		if (s == null){
			Debug.LogWarning("Sound" + name + "not found!");
			return;	
		}

		// Play sound
		s.source.Play();
	}
}
