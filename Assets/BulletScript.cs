using UnityEngine;
using System.Collections;

public class BulletScript : MonoBehaviour {
	Rigidbody r;

	// Use this for initialization
	void Start () {
		r = GetComponent<Rigidbody> ();
		Invoke ("Destroy", 5f);
	}
	
	// Update is called once per frame
	void Update () {
		r.velocity = transform.forward * 10f;
	}

	void Destroy() {
		Destroy (gameObject);
	}

	void OnCollisionEnter() {
		Destroy ();
	}
}
