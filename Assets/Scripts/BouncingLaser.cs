using UnityEngine;

public class BouncingLaser : MonoBehaviour
{
    public int maxBounces = 5;          // Maximum number of times the laser can bounce
    public float laserSpeed = 10.0f;    // Speed of the laser in units per second
    public float laserLength = 50.0f;   // Length of the laser in units
    public LayerMask layerMask;         // Layer mask for raycasting
    public string goalTag = "Goal";     // Tag for the end goal object
    public string wallTag = "Wall";     // Tag for the end goal object


    private LineRenderer lineRenderer;  // Line Renderer component for the laser
    private int currentBounces = 0;     // Current number of bounces
    private Vector3 laserDirection;     // Direction of the laser

    public GameObject laser ;

    void Start()
    {
        // Get the Line Renderer component
        lineRenderer = GetComponent<LineRenderer>();

        // Set the initial positions of the line renderer
        lineRenderer.SetPosition(0, laser.transform.position);
        lineRenderer.SetPosition(1, laser.transform.position - transform.up * laserLength);

        // Set the initial direction of the laser
        laserDirection = -transform.up;
    }

    void FixedUpdate()
    {
        lineRenderer.SetPosition(0, laser.transform.position);


        // Cast a ray from the current position of the laser in the current direction
        RaycastHit hitInfo;
        if (Physics.Raycast(lineRenderer.GetPosition(currentBounces), laserDirection, out hitInfo, laserLength, layerMask))
        {
            if (currentBounces > maxBounces || currentBounces > 100)
            {
                currentBounces = 0;
                laserDirection = -transform.up;
            }



            // Get the position and normal of the collision
            Vector3 hitPoint = hitInfo.point;
            Vector3 hitNormal = hitInfo.normal;

            // Calculate the reflection vector of the laser
            Vector3 tempLaserDirection = Vector3.Reflect(laserDirection, hitNormal);
            laserDirection = new Vector3(Mathf.Round(tempLaserDirection.x), Mathf.Round(tempLaserDirection.y), 0.0f);


            // Update the line renderer positions
            //lineRenderer.positionCount = currentBounces + 2;
            lineRenderer.SetPosition(currentBounces + 1, hitPoint);

            // If the laser hits the end goal object, end the level
            if (hitInfo.collider.CompareTag(goalTag))
            {
                // End the level
                Debug.LogError("Level Complete!");
            }
            if (hitInfo.collider.CompareTag(wallTag))
            {
                currentBounces = 0;
                laserDirection = -transform.up;
            }


            // Increment the current number of bounces
            currentBounces++;

            // If we've reached the maximum number of bounces, stop bouncing

        }
        else
        {
            // If the laser didn't hit anything, update the line renderer position to the end of the laser
            //lineRenderer.positionCount = currentBounces + 2;
            while(currentBounces < maxBounces - 1)
            {
                //Debug.LogError("currentBounces: " + currentBounces);
                lineRenderer.SetPosition(currentBounces + 1, lineRenderer.GetPosition(currentBounces) + laserDirection * laserLength);
                currentBounces++;
            }
            currentBounces = 0;
            laserDirection = -transform.up;

        }
    }
}
