using UnityEngine;
using System.Collections;

public class Transparency : MonoBehaviour {
	const float Alpha = 0.75f;

	// Use this for initialization
	void Start () {
		Color color = GetComponent<Renderer> ().material.color;
		color.a = Alpha;
		GetComponent<Renderer> ().material.color = color;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
