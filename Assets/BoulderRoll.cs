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

	// Use this for initialization
	void Start () {
		camScript = Camera.main.GetComponent<CameraScript> ();
		rigidbody = GetComponent<Rigidbody> ();
		speed = 0;
		transform.localScale = Vector3.one * maxSize;
		collider = GetComponent<SphereCollider> ();
	}

	public void SetSpeed(float s) {
		speed = s;
	}

	public void Fire() {
		speed = fireSpeed;
		transform.position = 
			owner.transform.position + 
			(owner.transform.localScale.x / 2 + transform.localScale.x / 2 + 0.5f) * owner.transform.forward +
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
			collider.enabled = true;
			if (speed - deceleration * Time.deltaTime <= 0) {
				speed = 0;
			} else {
				speed -= deceleration * Time.deltaTime;
			}

			rigidbody.velocity = new Vector3 (transform.forward.x * speed,
			                                  rigidbody.velocity.y, 
			                                  transform.forward.z * speed);
		} else {
			collider.enabled = false;
			Vector3 target = owner.transform.position + Vector3.up * (owner.transform.localScale.y + transform.localScale.y/1.9f);

//			if (Vector3.Distance (target, transform.position) < 1f) {
				transform.position = target;
//			} else {
//				transform.position = Vector3.Lerp (transform.position, target, 0.5f);
//			}
			transform.forward = owner.transform.forward;
		}
	}

	void OnCollisionEnter(Collision c) {
		if (c.gameObject.tag == "bouncer") {
			ContactPoint contact = c.contacts [0];
			Vector3 normal = contact.normal;

			Debug.Log (normal);
			Vector3 u = Vector3.Dot (transform.forward.normalized, normal.normalized) * normal.normalized;
			Vector3 w = transform.forward.normalized - u;
			speed *= 0.9f;
			transform.forward = w - u;
			camScript.Shake (transform.forward, 1 - ((fireSpeed - speed)/fireSpeed));
		}
	}
}
