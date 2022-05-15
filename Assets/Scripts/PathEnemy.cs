using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AiPatrol : MonoBehaviour
{
    public float speed;
    public float distance;

    private bool movingRight = true;

    public Transform groundDetection;

    private void Update()
    {
        transform.Translate(Vector2.right * speed * Time.deltaTime); //se mueve a una velocidad constante

        RaycastHit2D groundInfo = Physics2D.Raycast(groundDetection.position, Vector2.down, distance); //raycast para detectar donde termina el piso
        if (groundInfo.collider == false) //si ya no hay piso
        {
            if (movingRight == true) //si esta avanzando a la derecha
            {
                transform.eulerAngles = new Vector3(0, -180, 0); //gira a la izquierda
                movingRight = false;
            }
            else  // si avanza a la isquierda
            {
                transform.eulerAngles = new Vector3(0, 0, 0); //gira a la derecha
                movingRight = true;
            }
        }
    }
}