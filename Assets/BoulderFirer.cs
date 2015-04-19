using UnityEngine;
using System.Collections;

public class BoulderFirer : MonoBehaviour {
	BoulderRoll roll;

	// Use this for initialization
	void Start () {
		GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.forward = transform.forward;
		sphere.transform.position = new Vector3(transform.position.x, 2.5f, transform.position.z);
		Rigidbody r = sphere.AddComponent<Rigidbody>();
		r.velocity = transform.forward * 50;
		r.freezeRotation = true;
		r.mass = 1;
		sphere.tag = "ball";
		roll = sphere.AddComponent<BoulderRoll>();
		sphere.transform.position = new Vector3 (0, 10f, 0);

//		roll.Pickup (gameObject);

//		GameObject g = new GameObject ();
//		g.transform.localScale = Vector3.one * 5;
//		MeshFilter filter = g.AddComponent<MeshFilter> ();
//
//		filter.mesh.vertices = new Vector3[] {	new Vector3(0,0,1),
//		                                   		new Vector3(0,0,0),
//		                                   		new Vector3(1,0,0),
//		                                   		new Vector3(0,1,1),
//		                                   		new Vector3(0,1,0),
//												new Vector3(1,1,0)};
//		filter.mesh.triangles = new int[] {	4,2,1,
//											2,4,5,
//											1,0,3,
//			                                3,4,1,
//			                                3,5,4,
//			                                5,3,0,
//			                                0,2,5,
//											0,1,2};
//		MeshRenderer renderer = g.AddComponent<MeshRenderer> ();
//		g.AddComponent<MeshCollider> ();
//		g.transform.rotation = Quaternion.Euler (0, 90, 0);
//		g.transform.position = new Vector3 (-7.5f, 0f, 7.5f);
//		g.tag = "bouncer";
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown ("Jump")) {
			if (roll.IsFired()) {
				if (Vector3.Distance(transform.position, roll.transform.position) < roll.transform.localScale.x * 1.5f) {
					roll.Pickup(gameObject);
				}
			} else {
				roll.Fire ();
			}
		}
	}
}
