using UnityEngine;
using System.Collections;
using System;

public class EnemyMoveFSM : MonoBehaviour {
	private Action activeState;
	private GameObject ball;
	private GameObject player;
	private Rigidbody r;
	private Rigidbody ball_r;
	private BoulderRoll roll;
	const float moveSpeed = 5f;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		ball = GameObject.FindGameObjectWithTag ("ball");
		r = GetComponent<Rigidbody> ();
		ball_r = ball.GetComponent<Rigidbody> ();
		roll = ball.GetComponent<BoulderRoll> ();
		CHANGESTATE_Idle ();
	}

	//DODGE BALL STATE

	private Vector3 fleeDirection;
	const float fleeDistance = 25f;

	void STATE_DodgeBall() {
		r.velocity = fleeDirection.normalized * moveSpeed;
		Debug.Log (fleeDirection.normalized);
		//Change state if necessary.
		if (!BallHeadingForMe ()) {
			CHANGESTATE_Idle();
		}
	}
	void CHANGESTATE_DodgeBall() {
		Vector3 toBall = ball.transform.position - transform.position;
		if (UnityEngine.Random.Range (0f, 1f) < 0.5f) {
			fleeDirection = Quaternion.AngleAxis(90, Vector3.up) * toBall;
			fleeDirection.y = 0;
		} else {
			fleeDirection = Quaternion.AngleAxis(90, Vector3.up) * toBall;
			fleeDirection.y = 0;
		}
		activeState = STATE_DodgeBall;
	}

	//IDLE STATE
	
	void STATE_Idle() {
		r.velocity = Vector3.zero;
		if (BallHeadingForMe ()) {
			CHANGESTATE_DodgeBall();
		}
	}
	void CHANGESTATE_Idle() {
		activeState = STATE_Idle;
	}

	//GAME STATE EXAMINING FUNCTIONS

	bool BallHeadingForMe() {
		Plane ballPlane = new Plane (ball.transform.forward, ball.transform.position);
		return (Vector3.Distance (transform.position, ball.transform.position) <= fleeDistance &&
		        ballPlane.GetSide(transform.position) &&
		        roll.GetSpeed() > 0);
	}
	
	// Update is called once per frame
	void Update () {
		activeState ();
	}
}
