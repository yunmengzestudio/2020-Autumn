using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RolateObject : MonoBehaviour
{
    private float xx;
    private float yy;
    private float RolateSpeed = 120f;
    public Transform Target;
    private Vector3 Offest;
    void Start()
    {
        xx = this.transform.eulerAngles.x;
        yy = this.transform.eulerAngles.y;
        Offest = Target.position - this.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.RotateAround(Target.position, Vector3.up,Input.GetAxis("Mouse X")*RolateSpeed * Time.deltaTime);
        transform.RotateAround(Target.position, Vector3.right, Input.GetAxis("Mouse Y") * RolateSpeed * Time.deltaTime);
        transform.LookAt(Target);
    }
}
