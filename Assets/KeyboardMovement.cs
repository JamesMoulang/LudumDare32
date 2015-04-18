using UnityEngine;
using System.Collections;

public class KeyboardMovement : MonoBehaviour {
	private Rigidbody rigidbody;
	private float speed = 250;

	// Use this for initialization
	void Start () {
		rigidbody = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 moveDirection = new Vector3(Input.GetAxis ("Horizontal"),
		                                    0,
		                                    Input.GetAxis("Vertical")).normalized;
		if (moveDirection != Vector3.zero) {
			transform.forward = moveDirection;
		}
		rigidbody.velocity = new Vector3 (moveDirection.x * speed * Time.deltaTime, 
		                                  rigidbody.velocity.y, 
		                                  moveDirection.z * speed * Time.deltaTime);
	}
}
