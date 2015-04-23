using UnityEngine;
using System.Collections;

public class BoulderFirer : MonoBehaviour {
	BoulderRoll roll;

	// Use this for initialization
	void Start () {
		roll = GameObject.FindGameObjectWithTag ("ball").GetComponent<BoulderRoll> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown ("Jump")) {
			if (roll.IsFired()) {
				if (Vector3.Distance(transform.position, roll.transform.position) < roll.transform.localScale.x * 1.5f) {
					roll.Pickup(gameObject);
				}
			} else {
				if (!roll.IsColliding()) {
					roll.Fire ();
				}
			}
		}
	}
}
