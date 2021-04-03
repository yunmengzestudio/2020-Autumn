using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RolateDemo : MonoBehaviour
{
    float h;
    float v;
    float Speed = 10;
    private Vector3 Distance;
    private float XSpeed=120f;
    private float YSpeed = 120f;
    private float mx;
    private float my;    //Rolation Angle
    private Quaternion MyRolation;
    
    void Start()
    {
        mx = transform.eulerAngles.x;
        my = transform.eulerAngles.y;
    }

    
    void Update()
    {
       
        
    }
    private void FixedUpdate()
    {
        mx += Input.GetAxis("Mouse X") * XSpeed * 0.02f;
        my += Input.GetAxis("Mouse Y") * YSpeed * 0.02f;
        MyRolation = Quaternion.Euler(-my, mx, 0);
        this.transform.rotation = MyRolation;     
        Movement();
    }
    private void Movement()
    {
        h = Input.GetAxisRaw("Horizontal");
        v = Input.GetAxis("Vertical");
        this.transform.Translate(h * Speed * Time.deltaTime, 0f, v * Time.deltaTime * Speed);
        if (Input.GetKeyDown(KeyCode.Space))
        {
            
        }
    }

}
    

