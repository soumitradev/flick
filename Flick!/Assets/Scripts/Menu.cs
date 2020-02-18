using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu: MonoBehaviour {
	// Text for coins
	public Text CoinText;

	// GameObject for main menu
	public GameObject MainMenu;

	public void Menu_Start(){
		// If we hit start, open the next scene
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void Reset_Coins(){	
		// If we reset coins, set coins to 0
		PlayerPrefs.DeleteKey("Coins");
		PlayerPrefs.SetInt("Coins", 0);

		// Make text for coins
		CoinText.text = PlayerPrefs.GetInt("Coins") + " Coins";

		// Set newCoin to true
		MainMenu.GetComponent<AdLoader>().newCoin = true;
	}

	public void Menu_Quit(){
		// If we hit quit, quit
		Application.Quit();
	}
}