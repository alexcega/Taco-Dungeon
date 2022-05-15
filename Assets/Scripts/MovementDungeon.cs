using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementDungeon : MonoBehaviour
{
    public float Speed = 5;
    public SpriteRenderer sr;
    public Transform groundCheck;
    public LayerMask whatisGround;
    public float checkRadius;

    public int extraJumps;
    private float moveLR;
    private float moveUD;
    private bool isGrounded;
    private Rigidbody2D rb;

    public Transform cont_Shoot;
    public Transform pointer;
    public GameObject playerbullet;
    //public GameObject shooter;
    private Vector3 objPosition, mousePosition;
    private float angle;
    private AudioSource mAudioSrc;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        //shooter = GetComponent<GameObject>();
        mAudioSrc = GetComponent<AudioSource>();
    }

    void Update()
    {
        // Codigo para apuntar con el mouse
        pointer.position = Camera.main.ScreenToWorldPoint(new Vector3(
            Input.mousePosition.x, 
            Input.mousePosition.y, 
            -Camera.main.transform.position.z));
        if (PauseMenu.GameIsPaused == false)
        {
            if (Input.GetButtonDown("Fire1"))
            {
                disparar(); // Función void 
                mAudioSrc.Play();
            }
        }
        
    }

    void FixedUpdate()
    {
        isGrounded = Physics2D.OverlapCircle(groundCheck.position, checkRadius, whatisGround);
        moveUD = Input.GetAxis("Vertical");
        moveLR = Input.GetAxis("Horizontal");
        Debug.Log(moveLR);
        Debug.Log(moveUD);
        rb.velocity = new Vector2(moveUD * Speed, rb.velocity.y); // se mueve  arriba y abajo multiplicado por speed (up, down)
        rb.velocity = new Vector3(moveLR * Speed, rb.velocity.x); // se muebe izquierda y derecha multiplicado por speed  (left, right)

        flipPlayer(); 
     
    } 
    void flipPlayer() //solo gira izquierda derecha, no ariba abajo
    {
        if (moveLR > 0) //movimiento en positivo, gira derecha
        {
            sr.flipX = false; 
        }
        else if (moveLR < 0) //movimiento en negativo, gira izquierda
        {
            sr.flipX = true;
        }
    }

    void disparar()
    {   //Codigo para disparar
        mousePosition = Input.mousePosition;
        objPosition = Camera.main.WorldToScreenPoint(transform.position);
        angle = Mathf.Atan2((mousePosition.y - objPosition.y),(mousePosition.x - objPosition.x)) * Mathf.Rad2Deg;
        cont_Shoot.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angle));
        Instantiate(playerbullet,cont_Shoot.position, cont_Shoot.transform.rotation);
    }
}

