using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyBullet : MonoBehaviour
{
    private Rigidbody2D bulletRB;
    public float bulletspeed;
    public float bulletLife;

    private Vector2 objPosition;
    private Vector3 pastPosition;

    void Awake()
    {
        bulletRB = GetComponent<Rigidbody2D>();
    }
    // Start is called before the first frame update
    void Start()
    {
        bulletRB.velocity = transform.right * bulletspeed;
        pastPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (pastPosition != transform.position)
        {
            transform.right = transform.position - pastPosition;
            pastPosition = transform.position;
        }
        Destroy(gameObject, bulletLife);
    }

    //Cuando la bala choque con el jugador, deberá destruir al jugador y reiniciar la escena
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag != "Enemy")
        {
            Destroy(gameObject);
            MovementDungeon hit = collision.gameObject.GetComponent<MovementDungeon>();
            if (hit != null)
            {
                //Destroy(hit.gameObject);
                //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                FindObjectOfType<GameManager>().EndGame();
            }
        }
    }
}
