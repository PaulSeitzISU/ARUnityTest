using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ObjectManager : MonoBehaviour
{
    public GameObject prefabObject; // The array of prefab objects
    private GameObject[] instantiatedObjects = new GameObject[10]; // The array of instantiated objects

    public ImageTracking imageTracking;

    void Start()
    {
        imageTracking = FindObjectOfType<ImageTracking>();
        // Instantiate the objects
        //instantiatedObjects = new GameObject[prefabObjects.Length];
        for (int i = 1; i < 4; i++)
        {
            //Debug.LogError("instantiating  " + i.ToString());
            instantiatedObjects[i] = Instantiate(prefabObject, transform);
            instantiatedObjects[i].name = i.ToString();
            instantiatedObjects[i].SetActive(false);
        }
    }

    void Update()
    {

        if(imageTracking != null && imageTracking.m_TrackedImagesList.Count > 1)  
        {
            foreach (GameObject obj in instantiatedObjects)
            {   
                if(obj != null)
                {
                    Debug.LogError("obj name: " + obj.name + " tracking ");
                    //Debug.LogError("obj name: " + obj.name + " tracking " + imageTracking.m_TrackedImagesList[int.Parse(obj.name)] );
                    if(imageTracking.m_TrackedImagesList.Count > int.Parse(obj.name) && imageTracking.m_TrackedImagesList[int.Parse(obj.name)] != null && imageTracking.m_TrackedImagesList.Contains(imageTracking.m_TrackedImagesList[ int.Parse(obj.name)])) 
                    {
                        Debug.LogError("test 1");
                        obj.SetActive(true);

                    } else
                    {
                    Debug.LogError("test 1.5");

                    }
                    Debug.LogError("test 2");

                    if(obj.activeSelf == true && imageTracking.m_TrackedImagesList.Contains(imageTracking.m_TrackedImagesList[ int.Parse(obj.name) ]))
                    {
                        obj.transform.position = SnapToGrid(imageTracking.m_TrackedImagesList[ int.Parse(obj.name)].transform.position, 1f, imageTracking.transform.position, false);
                        obj.transform.rotation = RoundZRotationToNearest45Degree(imageTracking.m_TrackedImagesList[ int.Parse(obj.name)].transform.rotation);
                        Debug.LogError("test 5");

                    }
                    Debug.LogError("test 6");
                } else
                {
                    Debug.LogError("obj is null");
                }

            }
        } else
        {
            Debug.LogError("no tracking  ");
            imageTracking = FindObjectOfType<ImageTracking>();

        }
    }

    public Quaternion RoundZRotationToNearest45Degree(Quaternion rotation)
    {
        float angle = rotation.eulerAngles.z;
        float roundedAngle = Mathf.Round(angle / 45f) * 45f;
        return Quaternion.Euler(0f, 0f, roundedAngle);
    }

    public Vector3 SnapToGrid(Vector3 position, float cellSpacing, Vector3 gridOrigin, bool setZToZero = true)
    {
        //Debug.Log("snapping to grid");
        // calculate the snapped position on the X-Y plane
        Vector2 snappedPosition = new Vector2(Mathf.Round((position.x - gridOrigin.x) / cellSpacing) * cellSpacing,
                                              Mathf.Round((position.y - gridOrigin.y) / cellSpacing) * cellSpacing);

        // create a new position with the snapped X-Y coordinates and the original Z coordinate
        Vector3 snappedPosition3D = new Vector3(snappedPosition.x, snappedPosition.y, 0f);
        //Debug.LogError("snappedPosition3D: " + snappedPosition3D);

        // optionally set the Z coordinate to 0
        if (setZToZero)
        {
            snappedPosition3D.z = 0f;
        }

        return snappedPosition3D;
    }
}
