using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBullet : MonoBehaviour
{
    private Rigidbody2D bulletRB;
    public float bulletspeed;
    public float bulletLife;
    public float damage = 1f;
	

    private Vector2 mousePosition, objPosition;
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
        if(pastPosition != transform.position)
        {
            transform.right = transform.position - pastPosition;
            pastPosition = transform.position;
        }
        Destroy(gameObject, bulletLife);
    }

    //Cuando la bala golpea algun objeto, se destruye
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag != "Player")
        {
            Destroy(gameObject);
            //Si golpea al enemigo limon, le restará vida y lo destruirá cuando
            Lemon hit = collision.gameObject.GetComponent<Lemon>();
            if (hit != null)
            {
                    Destroy(hit.gameObject);
					//FindObjectOfType<Lemon>().morir();
            }
        }
    }
}
