using UnityEngine;
using System.Collections;

public class BoulderRoll : MonoBehaviour {
	Rigidbody rigidbody;
	private float speed;
	const float growSpeed = 20f;
	const float maxSize = 5f;
	const float deceleration = 1f;
	const float fireSpeed = 1000;
	private bool fired = true;
	private GameObject owner;

	// Use this for initialization
	void Start () {
		rigidbody = GetComponent<Rigidbody> ();
		speed = 0;
		transform.localScale = Vector3.one * maxSize;
	}

	public void Fire() {
		speed = fireSpeed;
		fired = true;
	}

	public bool IsFired() {
		return fired;
	}

	public void Pickup(GameObject g) {
		fired = false;
		owner = g;
	}
	
	// Update is called once per frame
	void Update () {
		if (fired) {
			if (speed - deceleration * Time.deltaTime <= 0) {
				speed = 0;
			} else {
				speed -= deceleration * Time.deltaTime;
			}
			Debug.Log (speed);

			rigidbody.velocity = new Vector3 (transform.forward.x * speed * Time.deltaTime,
			                                  rigidbody.velocity.y, 
			                                  transform.forward.z * speed * Time.deltaTime);
		} else {
			transform.position = owner.transform.position + Vector3.up * (0.1f + owner.transform.localScale.y + transform.localScale.y/2);
			transform.forward = owner.transform.forward;
		}
	}

	void OnCollisionEnter(Collision c) {
		if (c.gameObject.tag == "bouncer") {
			Debug.Log (transform.forward.normalized);
			ContactPoint contact = c.contacts [0];
			Vector3 normal = contact.normal;

			Vector3 u = Vector3.Dot (transform.forward.normalized, normal.normalized) * normal.normalized;
			Vector3 w = transform.forward.normalized - u;
			speed *= 0.75f;
			transform.forward = w - u;
		}
	}
}
