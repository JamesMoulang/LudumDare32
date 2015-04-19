using UnityEngine;
using System.Collections;

public class CameraScript : MonoBehaviour {
	public GameObject target;
	Vector3 currentVelocity = Vector3.zero;
	Vector3 shakenPosition;
	Vector3 targetPosition;
	Vector3 unshakenPosition;
	const float shakeMagnitude = 0.5f;
	bool shaking = false;
	bool returning = false;
	Vector3 direction;

	// Use this for initialization
	void Start () {
	
	}

	public void Shake(Vector3 dir) {
		shakenPosition = unshakenPosition - dir * shakeMagnitude;
		direction = dir;
		returning = false;
		shaking = true;
	}
	
	// Update is called once per frame
	void Update () {
		if (target != null) {
			Vector3 targetPosition = target.transform.position + new Vector3 (-20, 20, -20);
			unshakenPosition = Vector3.SmoothDamp (transform.position, targetPosition, ref currentVelocity, 0.25f);
			if (shaking) {
				if ((Vector3.Distance (transform.position, shakenPosition) < 0.25f)) {
					if (!returning) {
						Debug.Log ("Shaking back");
						returning = true;
						shakenPosition = unshakenPosition;
					} else {
						Debug.Log ("Shaking over");
						shaking = false;
					}
				} else {
					Debug.Log ("Shaking there");
					shakenPosition = unshakenPosition - direction * shakeMagnitude;
					transform.position = Vector3.Lerp (transform.position, shakenPosition, 0.5f);
				}
			} else {
				transform.position = unshakenPosition;
			}
		} else {
			Debug.Log ("Target is dead");
		}
	}
}
