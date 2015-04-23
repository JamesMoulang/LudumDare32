using UnityEngine;
using System.Collections;

public class MapGen : MonoBehaviour {
	public string FileName;
	public GameObject Floor;
	public GameObject FloorTwo;
	public GameObject FloorThree;
	public GameObject Player;
	public GameObject Triangle;
	public GameObject Ledge;
	public GameObject Wall;
	public GameObject Enemy;

	// Use this for initialization
	void Start () {
		Texture2D map = Resources.Load <Texture2D> (FileName);
		int width = (int) (Mathf.Sqrt(map.GetPixels ().Length));

		for (int x = 0; x < width; x++) {
			for (int y = 0; y < width; y++) {
				if (map.GetPixel (x,y) == Color.cyan) {
					SpawnFloor(x,y);
					SpawnPlayer(x,y);
				}

				if(map.GetPixel (x,y) == new Color(1, 1, 0)) {
					SpawnFloor(x,y);
					SpawnEnemy(x,y);
				}

				if (map.GetPixel(x,y) == Color.magenta) {
					SpawnFloor(x,y);
					SpawnBall(x,y);
				}

				if (map.GetPixel (x, y) == Color.green || map.GetPixel (x, y) == Color.white) {
					SpawnFloor(x, y);
				}

				if (map.GetPixel (x, y) == Color.red) {
					SpawnTriangle(x,y, map);
				}

				if (map.GetPixel(x, y) == Color.black) {
					SpawnWall(x, y, map);
				}
			}
		}
	}

	void SpawnEnemy(int x, int y) {
		GameObject.Instantiate (Enemy, new Vector3 (x * 5, Enemy.transform.localScale.y/2 + 0.01f, y * 5), Quaternion.identity);
	}

	void SpawnWall(int x, int y, Texture2D map) {
		//Decide the rotation based on the other tiles.

		GameObject wall = (GameObject) GameObject.Instantiate (Wall, new Vector3 (x * 5, 2.5f, y * 5), Quaternion.identity);

		int counter = 0;
		if (map.GetPixel (x + 1, y) != Color.blue && map.GetPixel (x+1, y) != Color.black) {
			wall.GetComponent<WallScript>().East ();
			counter++;
		}

		if (map.GetPixel (x - 1, y) != Color.blue && map.GetPixel (x-1, y) != Color.black) {
			wall.GetComponent<WallScript>().West ();
			counter++;
		}

		if (map.GetPixel (x, y+1) != Color.blue && map.GetPixel (x, y+1) != Color.black) {
			wall.GetComponent<WallScript>().North ();
			counter++;
		}

		if (map.GetPixel (x, y-1) != Color.blue && map.GetPixel (x, y-1) != Color.black) {
			wall.GetComponent<WallScript>().South ();
			counter++;
		}

		if (counter == 4) {
			wall.GetComponent<WallScript>().All ();
		}
	}

	void SpawnTriangle(int x, int y, Texture2D map) {
		GameObject triangle = (GameObject)GameObject.Instantiate(Triangle, new Vector3(x*5, 2.5f, y*5), Quaternion.identity);

		if (map.GetPixel (x + 1, y) == Color.white &&
			map.GetPixel (x, y + 1) == Color.white) {
			triangle.transform.rotation = Quaternion.Euler (0, 0, 0);
		}

		if (map.GetPixel (x + 1, y) == Color.white &&
		    map.GetPixel (x, y - 1) == Color.white) {
			triangle.transform.rotation = Quaternion.Euler (0, 90, 0);
		}

		if (map.GetPixel (x - 1, y) == Color.white &&
		    map.GetPixel (x, y - 1) == Color.white) {
			triangle.transform.rotation = Quaternion.Euler (0, 180, 0);
		}

		if (map.GetPixel (x - 1, y) == Color.white &&
		    map.GetPixel (x, y + 1) == Color.white) {
			triangle.transform.rotation = Quaternion.Euler (0, 270, 0);
		}
	}

	void SpawnLedge(int x, int y) {
		GameObject.Instantiate(Ledge, 
		                       new Vector3(x*5, Ledge.transform.localScale.y/2, y*5), 
		                       Quaternion.Euler (0, Random.Range (0, 4) * 90, 0));
	}

	void SpawnFloor(int x, int y) {
		GameObject floor;
		float random = Random.Range (0f, 1f);
		if (random < 0.33f) {
			floor = Floor;
		} else if (random < 0.66f) {
			floor = FloorTwo;
		} else {
			floor = FloorThree;
		}
		
		Quaternion rotation = Quaternion.Euler (0, Random.Range (0, 4) * 90, 0);
		
		GameObject.Instantiate(floor, new Vector3(x*5, 0, y*5), rotation);
	}

	void SpawnPlayer(int x, int y) {
		Debug.Log ("moving player");
		Player.transform.position = new Vector3 (x * 5, 1.01f, y * 5);
	}

	void SpawnBall(int x, int y) {
		Vector3 pos = new Vector3 (x * 5, 50, y * 5);

		GameObject.FindGameObjectWithTag ("ball").transform.position = pos;
	}

	bool IsFloor(Color pixel) {
		return (pixel.r <= 0.25f &&
				pixel.g >= 0.9f &&
				pixel.b <= 0.25f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
