using UnityEngine;
using UnityEngine.EventSystems;

/*  TODO:
 * ------------Post-Up------------
 *
 * https://play.google.com/store/apps/details?id=com.BlubirdLabs.Flick
 *
 * - Add Comments To Code
 * - Clean Up Code & Centralize
 * - Rename Variables / Code
 * - Beautify All Code
 * - Marketing
 * -----------------Next Version-----------
 * - Pause
 * *************************V2.0********************************
 * - Add Skins
 * - Add Local Multiplayer
 */

public class Shoot : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public int Chance = 0;

    public bool stateStress = false;

    public bool turnDone = false;

    public bool printed = false;

    //public bool spawn;

    public float force;

    public float deltaX, deltaY;

    public Vector3 startPos;

    public GameObject ball;

    public GameObject original;

    public GameObject[] Line;

    public TrailRenderer trail;

    // Use this for initialization

    private void Start()
    {
        // spawn = false;

        startPos = transform.position;
        Invoke("MakeStatic", 0.1f);
        Invoke("MakeDynamic", 0.1f);


        trail.time = Mathf.Infinity;
    }

    private void MakeStatic()
    {
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }

    private void MakeDynamic()
    {
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
    }

    private void MakeKinematic()
    {
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }

    // Update is called once per frame
    public void OnEndDrag(PointerEventData pointerEvent)
    {

        
        Invoke("MakeKinematic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

        //spawn = true;

        turnDone = true;
        


        GetComponent<CircleCollider2D>().enabled = true;

        stateStress = false;

        trail.enabled = true;

        // Add the Force


        Vector3 dir = startPos - transform.position;

        transform.position = startPos;

        GetComponent<Rigidbody2D>().AddForce(dir * force);
    

        FindObjectOfType<AudioManager>().Play("Click");

        Chance++;

        if (Chance >= 2)
        {
            original.tag = "otherLine";

            Line = GameObject.FindGameObjectsWithTag("Line");

            for (var i = 0; i < Line.Length; i++)
            {
                Destroy(Line[i]);
            }

            original.tag = "Line";
        }
    }

    private void FixedUpdate()
    {   if (!stateStress)
            startPos = transform.position;

        if (!stateStress && GetComponent<Speed>().speed < 0.01f && !printed)
        {
            stateStress = false;

            Instantiate(ball, startPos, Quaternion.identity);

            printed = true;
        }

        if (!stateStress && GetComponent<Speed>().speed < 0.01f)
        {
            MakeStatic();
            MakeDynamic();
        }

        if (GetComponent<Speed>().speed > 0 && !stateStress)
        {
            Vector3 new_pos = transform.position;
            new_pos[2] = 1;
            Instantiate(ball, new_pos, Quaternion.identity);
        }
    }

    private void Update()
    {
    }


    public void OnDrag(PointerEventData eventData)
    {


        // Keep it in a certain radius
        if (!turnDone)
        {
            GetComponent<CircleCollider2D>().enabled = false;

        // Convert mouse position to world position

            Vector3 p = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            float radius = 1.8f;

            Vector3 dir = p - startPos;

            if (dir.sqrMagnitude > radius)
            {
                dir = dir.normalized * radius;
            }

            // Set the Position

            transform.position = startPos + dir;

            stateStress = true;

            trail.enabled = false;

            printed = false;
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
    }
}