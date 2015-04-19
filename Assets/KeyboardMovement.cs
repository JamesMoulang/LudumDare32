using UnityEngine;
using System.Collections;

public class KeyboardMovement : MonoBehaviour {
	private Rigidbody rigidbody;
	private float speed = 7.5f;

	// Use this for initialization
	void Start () {
		rigidbody = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 moveDirection = new Vector3(Input.GetAxis ("Vertical"),
		                                    0,
		                                    -Input.GetAxis("Horizontal"));
		moveDirection = Quaternion.AngleAxis (-45, Vector3.up) * moveDirection;
		if (moveDirection != Vector3.zero) {
			transform.forward = moveDirection;
		}
		rigidbody.velocity = new Vector3 (moveDirection.x * speed, 
		                                  rigidbody.velocity.y, 
		                                  moveDirection.z * speed);
	}
}
