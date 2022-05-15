using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lemon : MonoBehaviour
{
    public SpriteRenderer sr;
    public float spawnTime;
    public GameObject spawner;
    public GameObject bulletPrefab;
    public GameObject player;
    public float life = 5f;
    public ParticleSystem bomba;

    private float counter = 0.0f;
    private float angle;
    private Vector3 posPlayer, posLemon;
   


    // Update is called once per frame
    void Update()
    {
        counter += Time.deltaTime;
        //Cuando el contador llegue al spawnTime, se dispara un proyectil
        if (counter > spawnTime)
        {
            posPlayer = player.transform.position;
            posLemon = spawner.transform.position;
            //Calcula el angulo de disparo
            angle = Mathf.Atan2((posPlayer.y - posLemon.y), (posPlayer.x - posLemon.x)) * Mathf.Rad2Deg;
            spawner.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angle));
            Instantiate(bulletPrefab, spawner.transform.position, spawner.transform.rotation);
            //Reinicia la cuenta
            counter = 0;
        }

        Flip();
    }

    void Flip()
    {
        //El sprite se volteará horizontalmente, mirando al jugador
        if (player.transform.position.x < spawner.transform.position.x)
        {
            sr.flipX = true;
        }
        else if (player.transform.position.x > spawner.transform.position.x)
        {
            sr.flipX = false;
        }
    }

    public void morir()
    {
        bomba.Play();
    }
}
