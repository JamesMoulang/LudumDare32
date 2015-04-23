using UnityEngine;
using System.Collections;
using System;

public class EnemyLookFSM : MonoBehaviour {
	private Action activeState;
	private GameObject player;
	const float viewDistance = 50f;
	const float trackSpeed = 2.5f;
	public GameObject bullet;

	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		CHANGESTATE_ScanForPlayer ();
	}

	//SEEN PLAYER STATE

	void STATE_SeenPlayer() {
		Vector3 toPlayer = (player.transform.position - transform.position).normalized;
		toPlayer.y = 0;
		transform.forward = Vector3.RotateTowards (transform.forward,
		                                           toPlayer, 
		                                           trackSpeed * Time.deltaTime, 
		                                           0.0f);

		Ray ray = new Ray (transform.position, toPlayer);
		RaycastHit hit;
		if (!(Physics.Raycast (ray, out hit, LayerMask.NameToLayer("Bullet")) && hit.collider.gameObject == player)) {
			CHANGESTATE_LostPlayer();
		}
	}
	
	void CHANGESTATE_SeenPlayer() {
		CancelInvoke ();
		InvokeRepeating ("Fire", 0.25f, 0.25f);
		activeState = STATE_SeenPlayer;
	}

	void Fire() {
		GameObject.Instantiate (bullet, transform.position, transform.rotation);
	}

	//SCAN FOR PLAYER STATE

	void STATE_ScanForPlayer() {
		if (Vector3.Distance (transform.position, player.transform.position) < viewDistance) {
			CHANGESTATE_SeenPlayer();
		}
	}

	void CHANGESTATE_ScanForPlayer() {
		activeState = STATE_ScanForPlayer;
	}

	//LOST PLAYER STATE
	
	void STATE_LostPlayer() {
		
	}

	void CHANGESTATE_LostPlayer() {
		CancelInvoke ();
		Invoke ("CHANGESTATE_ScanForPlayer", 2f);
	}

	//UPDATE

	void Update () {
		activeState ();
	}
}
