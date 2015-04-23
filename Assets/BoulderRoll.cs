using UnityEngine;
using System.Collections;

public class BoulderRoll : MonoBehaviour {
	Rigidbody rigidbody;
	private float speed;
	const float growSpeed = 20f;
	const float maxSize = 5f;
	const float deceleration = 0.5f;
	const float fireSpeed = 25;
	private bool fired = true;
	private GameObject owner;
	SphereCollider collider;
	CameraScript camScript;
	private bool isColliding = false;
	Renderer renderer;
	bool colliding;

	public bool IsColliding() {
		return colliding;
	}

	// Use this for initialization
	void Start () {
		renderer = GetComponent<Renderer> ();
		camScript = Camera.main.GetComponent<CameraScript> ();
		rigidbody = GetComponent<Rigidbody> ();
		speed = 0;
		transform.localScale = Vector3.one * maxSize;
		collider = GetComponent<SphereCollider> ();
	}

	public void SetSpeed(float s) {
		speed = s;
	}

	public float GetSpeed() {
		return speed;
	}

	public void Fire() {
		speed = fireSpeed;
		transform.position = 
			owner.transform.position + 
			(owner.transform.localScale.x / 2 + transform.localScale.x + 0.5f) * owner.transform.forward +
			Vector3.up * 0.1f;
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
			rigidbody.useGravity = true;
//			collider.enabled = true;
			if (speed - deceleration * Time.deltaTime <= 0) {
				speed = 0;
			} else {
				speed -= deceleration * Time.deltaTime;
			}

			rigidbody.velocity = new Vector3 (transform.forward.x * speed,
			                                  rigidbody.velocity.y, 
			                                  transform.forward.z * speed);
		} else {
			rigidbody.useGravity = false;
//			collider.enabled = false;
			speed = 0;
			Vector3 target = owner.transform.position + Vector3.up * (owner.transform.localScale.y + transform.localScale.y/2f);

//			if (Vector3.Distance (target, transform.position) < 2.5f) {
				rigidbody.MovePosition(target);
//			} else {
//				rigidbody.MovePosition(Vector3.Lerp (transform.position, target, 0.5f));
//			}
			transform.forward = owner.transform.forward;
		}
		if (speed > 5) {
			renderer.material.color = Color.red;
		} else {
			renderer.material.color = Color.white;
		}
		isColliding = false;
	}

	void OnCollisionExit(Collision c) {
		colliding = false;
	}

	void OnCollisionStay(Collision c) {
		if (c.gameObject.tag != "Player") {
			colliding = true;
		}
	}

	void OnCollisionEnter(Collision c) {
		if (c.gameObject.tag != "Player") {
			colliding = true;
		}
		if (c.gameObject.tag == "bouncer") {
			if (isColliding)
				return;

			isColliding = true;

			ContactPoint contact = c.contacts [0];
			Vector3 normal = contact.normal;

			Vector3 u = Vector3.Dot (transform.forward.normalized, normal.normalized) * normal.normalized;
			Vector3 w = transform.forward.normalized - u;
			speed *= 0.9f;
			transform.forward = w - u;
			camScript.Shake (transform.forward, (speed/fireSpeed));
		}
	}
}
