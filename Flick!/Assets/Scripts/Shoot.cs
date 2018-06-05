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

        Invoke("AllowPhysics", .1f);
        //GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;

        trail.time = Mathf.Infinity;
    }

    private void AllowPhysics()
    {
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }

    // Update is called once per frame
    public void OnEndDrag(PointerEventData pointerEvent)
    {
        //spawn = true;

        turnDone = true;

        // GetComponent<Rigidbody2D>().isKinematic = false;

        GetComponent<CircleCollider2D>().enabled = true;

        stateStress = false;

        trail.enabled = true;

        // Add the Force

        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;

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
    {
        if (GetComponent<Speed>().speed > 0 && !stateStress)
            Instantiate(ball, transform.position, Quaternion.identity);
    }

    private void Update()
    {
        if (!stateStress)
            startPos = transform.position;

        if (!stateStress && GetComponent<Speed>().speed == 0f && !printed)
        {
            stateStress = false;

            Instantiate(ball, startPos, Quaternion.identity);

            printed = true;

            // spawn = false;

            GetComponent<Rigidbody2D>().isKinematic = true;
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        GetComponent<CircleCollider2D>().enabled = false;

        // Invoke("AllowPhysics", .1f);

        // GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;

        //  GetComponent<Rigidbody2D>().isKinematic = false;

        // Convert mouse position to world position

        Vector3 p = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        // Keep it in a certain radius
        if (!turnDone)
        {
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