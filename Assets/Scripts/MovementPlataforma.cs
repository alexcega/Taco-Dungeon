using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementPlataforma : MonoBehaviour
{
    public ParticleSystem dust;
    public float Speed = 5;
    public float jumpForce = 10;
    public SpriteRenderer sr;
    public Transform groundCheck;
    public LayerMask whatisGround;
    public float checkRadius;

    public int extraJumps;
    private float move;
    private bool isGrounded;
    private Rigidbody2D rb;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        jumpPlayer();
    }

    void FixedUpdate()
    {
        isGrounded = Physics2D.OverlapCircle(groundCheck.position, checkRadius, whatisGround);
        // para no saltar infinitamente
        move = Input.GetAxis("Horizontal");
        Debug.Log(move);
        rb.velocity = new Vector2(move * Speed, rb.velocity.y);
        //movimiento horizontal

        flipPlayer();

    }

    void flipPlayer()
    {

        if (move > 0)
        {
            CreateDust();
            sr.flipX = false;
        }
        else if (move < 0)
        {
            CreateDust();
            sr.flipX = true;
        }
        //para girar izq o der
    }

    void jumpPlayer()
    {

        if (isGrounded == true)
        {

            extraJumps = 1;
        }
        //Input.GetButtonDown("Jump") barra espacio
        if ( (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W) ) && extraJumps > 0)
        {
            CreateDust();
            rb.velocity = Vector2.up * jumpForce;
            extraJumps--;
          
        }
        else if (Input.GetButtonDown("Jump") && extraJumps == 0 && isGrounded == true)
        {
            CreateDust();
            rb.velocity = Vector2.up * jumpForce;
        }
    }

    void CreateDust() //genera el polvo al moverse
    {
        dust.Play();
    }
}

