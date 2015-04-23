using UnityEngine;
using System.Collections;

public class Squishable : MonoBehaviour {
	public GameObject splat;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter(Collision c) {
		if (c.gameObject.tag == "ball") {
			Rigidbody r = c.gameObject.GetComponent<Rigidbody>();
			if (Mathf.Abs (r.GetComponent<BoulderRoll>().GetSpeed()) > 5) {
				gameObject.SetActive(false);
				GameObject.Instantiate(splat, transform.position - Vector3.up * (transform.localScale.y/2 - 0.01f), Quaternion.identity);
			} else {
				r.GetComponent<BoulderRoll>().SetSpeed(0);
			}
		}
	}
}
