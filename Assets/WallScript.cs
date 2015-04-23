using UnityEngine;
using System.Collections;

public class WallScript : MonoBehaviour {
	public GameObject NorthFace;
	public GameObject SouthFace;
	public GameObject EastFace;
	public GameObject WestFace;

	public void North() {
		NorthFace.SetActive (true);
	}

	public void South() {
		SouthFace.SetActive (true);
	}

	public void East() {
		EastFace.SetActive (true);
	}

	public void West() {
		WestFace.SetActive (true);
	}

	public void All() {
		NorthFace.SetActive (false);
		SouthFace.SetActive (false);
		EastFace.SetActive (false);
		WestFace.SetActive (false);
		GetComponent<MeshRenderer> ().enabled = true;
	}
}
