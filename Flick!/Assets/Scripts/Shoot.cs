using UnityEngine;
using UnityEngine.EventSystems;

/*  TODO:
 * ------------Post-Up------------
 * - Add Comments To Code
 * - Clean Up Code & Centralize
 * - Rename Variables
 * - Marketing
 * - Privacy Policy update
 * -----------------Next Version-----------
 * - Pause
 * - Dark Mode
 * - Redo Soundtrack
 * - Add Coins for Wins
 * - Optimize
 * - Difficulty levels
 * *************************V1.1.0********************************
 * - Add Skins
 * - Add Local Multiplayer
 * - Replace TrailRenderer?
 */

public class Shoot: MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {
    // Create chance counter to destroy the collide detecting balls in its trail.
    [HideInInspector]
    public int chanceNumber = 0;

    // Boolean to show if the player has not been released, but has been dragged
    [HideInInspector]
    public bool stateStress = false;

    // Boolean to turn on for one frame (pulse) to let AI play
    public bool turnDone = false;

    // Boolean to turn on after fixing physics in Update() and FixedUpdate() so code doesn't repeat
    private bool physicsFixed = false;
    
    // Float for amount of force to be appied to the player
    public float force;

    // Store its initial position in a vector so it can be placed there before releasing
    public Vector3 startPos;

    // Ball object to spawn that detects collisions
    public GameObject ball;

    // Array that stores all the latest collide detecting balls
    public GameObject[] Line;

    private void Start(){
        // Set startPos to initial position
        startPos = transform.position;

        // Fix physics by making it immovable, and then dynamic
        Invoke("MakeStatic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

        // Set trail decay time to infinity so that trail stays forever
        GetComponent<TrailRenderer>().time = Mathf.Infinity;
    }

    // Function to make ball static
    private void MakeStatic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }

    // Function to make ball sensitive to forces
    private void MakeDynamic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
    }

    // Function to make ball ignore forces, but still retain its velocity
    private void MakeKinematic(){
        GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
    }

    public void OnEndDrag(PointerEventData pointerEvent){
        // Fix physics by letting the ball, and then making it sensitive to forces again
        Invoke("MakeKinematic", 0.1f);
        Invoke("MakeDynamic", 0.1f);

        // After ending the drag, our turn is done
        turnDone = true;
        
        // Enable collider after making move
        GetComponent<CircleCollider2D>().enabled = true;

        // After ending the drag, our ball is no more under stress
        stateStress = false;

        // After ending the turn, physics needs to be fixed in Update() or FixedUpdate() after the player stops
        physicsFixed = false;

        // Get vector along which it's supposed to move, and then move the ball to where it was before dragging
        Vector3 dir = startPos - transform.position;
        transform.position = startPos;

        // Apply force to the player to move it around
        GetComponent<Rigidbody2D>().AddForce(dir * force);    

        // Play the Click Sound
        FindObjectOfType<AudioManager>().Play("Click");

        // Increment chance count
        chanceNumber++;

        // If the chance is the second chance or higher for the player, destroy all the balls from previous move
        if (chanceNumber >= 2){
            // Don't destroy the original ball, so change its tag temporarily
            ball.tag = "otherLine";

            // Get all ball objects
            Line = GameObject.FindGameObjectsWithTag("Line");

            // Destroy all the balls
            for (var i = 0; i < Line.Length; i++){
                Destroy(Line[i]);
            }

            // Reset the original ball to the correct tag.
            ball.tag = "Line";
        }

        // Enable the trail
        GetComponent<TrailRenderer>().enabled = true;
    }

    private void FixedUpdate(){
        // If the player has stopped after being released, fix physics
        if (!stateStress && GetComponent<Speed>().speed < 0.01f && !physicsFixed){
            // Stop the player
            MakeStatic();

            // Make player dynamic again so that next move can be made
            MakeDynamic();

            // Set boolean to true so that this code doesn't run forever
            physicsFixed = true;
        }
    }

    private void Update(){
        // If the player is moving and is released, then spawn balls that detect collision
        if (GetComponent<Speed>().speed > 0 && !stateStress){
            // Spawn ball at player's position
            Vector3 newPos = transform.position;

            // Change z-value of spawn point so it doesn't interfere with player
            newPos[2] = 1;

            // Spawn a new ball
            Instantiate(ball, newPos, Quaternion.identity);
        }
    }

    public void OnDrag(PointerEventData eventData){
        // If the turn is not done and the ball is being dragged,
        if (!turnDone){
            // Disable the collider while dragging it around
            GetComponent<CircleCollider2D>().enabled = false;

            // Get position of player
            Vector3 p = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            // Radius in which player can move around in
            float radius = 1.8f;

            // Get the position vector of player with respect to its position before dragging
            Vector3 dir = p - startPos;

            // If the player is outside radius, bring it back into the circle
            if (dir.sqrMagnitude > radius){
                dir = dir.normalized * radius;
            }

            // Move the ball to the position in which it is dragged out
            transform.position = startPos + dir;

            // The ball is not released, but is stressed
            stateStress = true;
        }
    }

    public void OnBeginDrag(PointerEventData eventData){
        // Disable the trail renderer so that the path in which it is being dragged in is not traced
        GetComponent<TrailRenderer>().enabled = false;

        // Set initial position to current position
        startPos = transform.position;
    }
}
