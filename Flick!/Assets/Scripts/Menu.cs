using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour {

	public Text CoinText;

	public GameObject MainMenu;

	// Use this for initialization
	public void Menu_Start () {
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void Reset_Coins(){
	
		PlayerPrefs.DeleteKey ("Coins");

		PlayerPrefs.SetInt ("Coins", 0);

		CoinText.text = PlayerPrefs.GetInt ("Coins") + " Coins";

		MainMenu.GetComponent<AdLoader>().newCoin = true;
	}

	// Update is called once per frame
	public void Menu_Quit () {
		Application.Quit();
	}

}
