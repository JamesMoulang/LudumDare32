using UnityEngine;
using System.Collections;

public class Triangle : MonoBehaviour {

	// Use this for initialization
	void Start () {
		MeshFilter filter = gameObject.AddComponent<MeshFilter> ();

		Vector3[] vertices = new Vector3[] {	new Vector3(0,0,1),
			new Vector3(0,0,0),
			new Vector3(1,0,0),
			new Vector3(0,1,1),
			new Vector3(0,1,0),
			new Vector3(1,1,0)};

		for (int i = 0; i < vertices.Length; i++) {
			vertices[i] -= new Vector3(0.5f, 0.5f, 0.5f);
		}

		filter.mesh.vertices = vertices;
		filter.mesh.triangles = new int[] {	4,2,1,
			2,4,5,
			1,0,3,
			3,4,1,
			3,5,4,
			5,3,0,
			0,2,5,
			0,1,2};

		MeshRenderer renderer = gameObject.AddComponent<MeshRenderer> ();
		gameObject.AddComponent<MeshCollider> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
