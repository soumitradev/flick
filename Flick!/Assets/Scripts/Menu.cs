using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour {

	// Use this for initialization
	public void Menu_Start () {
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	// Update is called once per frame
	public void Menu_Quit () {
		Application.Quit();
	}

}
