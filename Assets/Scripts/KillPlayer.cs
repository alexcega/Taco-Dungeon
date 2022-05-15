using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KillPlayer : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]Transform Respawn; //para respawnear (objeto)

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.transform.CompareTag("Player")) //si toca al player
        {
            FindObjectOfType<GameManager>().EndGame();
            //col.transform.position = Respawn.position; //se respawnea, teletransporta
        }
    }
}
 