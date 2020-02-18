using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SetVolume: MonoBehaviour {
	// Mixer for sound
	public AudioMixer audioMixer;

	// Set volume for mixer
	public void Volume(float volume){
		audioMixer.SetFloat("volume", volume);
	}
}
