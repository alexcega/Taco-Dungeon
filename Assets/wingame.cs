using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class wingame : MonoBehaviour
{
    public ParticleSystem fw;
    public ParticleSystem fw2;
    [SerializeField] private string newLevel;
    // Start is called before the first frame update
    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.transform.CompareTag("Player")) //si toca al player
        {
            fw2.Play();
            fw.Play();
            FindObjectOfType<GameManager>().WinGame();
            Invoke("move", 1);
            //col.transform.position = Respawn.position; //se respawnea, teletransporta
            Destroy(gameObject);
        }
    }

    void move(Collider2D other)
    {
        SceneManager.LoadScene(newLevel);
    }
}
