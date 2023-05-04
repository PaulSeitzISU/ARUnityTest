using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ImageTracking : MonoBehaviour
{
    [SerializeField]
    public ARTrackedImageManager m_TrackedImageManager;

    [SerializeField]
    private GameObject m_StartTrackingButton;
    [SerializeField]
    private List<GameObject> m_ObjectPrefabs;
    public Dictionary<string,GameObject> m_PlacedObject = new Dictionary<string, GameObject>();

    [SerializeField]
    private float m_ScaleFactor = 1f;
    [SerializeField]
    private Vector3 m_RotationalOffset;
    public Slider m_RotationalOffsetX;
    public Slider m_RotationalOffsetY;
    public Slider m_RotationalOffsetZ;

    private Vector3 m_RotationalStart;
    public float smoothness = 1f;

    //objecManager
    public ObjectManager m_ObjectManager;

    [SerializeField]
    public List<ARTrackedImage> m_TrackedImagesList = new List<ARTrackedImage>();

    private void Awake()
{
    m_TrackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    Input.gyro.enabled = true;
    m_RotationalStart = Input.gyro.attitude.eulerAngles;

}
 void Update() 
 {
    CalculateRotationFromGameObjects(m_TrackedImagesList);
    //m_RotationalStart = new Vector3(m_RotationalOffsetX.value,m_RotationalOffsetY.value,m_RotationalOffsetZ.value);
 }

private void OnDestroy()
{
    m_TrackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    Input.gyro.enabled = false;
}

public void StartTracking()
{
    m_RotationalStart = Input.gyro.attitude.eulerAngles;
}

private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
{
    foreach (ARTrackedImage trackedImage in eventArgs.updated)
        { 
            if (!m_TrackedImagesList.Contains(trackedImage))
            {
                m_TrackedImagesList.Add(trackedImage);
            }
            if (trackedImage.trackingState == TrackingState.Tracking)
            {
                    if (trackedImage.referenceImage.name == "0" && !m_PlacedObject.TryGetValue(trackedImage.referenceImage.name, out GameObject tempObject))
                    {
                        GameObject placedObject = Instantiate(m_ObjectPrefabs[int.Parse(trackedImage.referenceImage.name)], trackedImage.transform.position, Quaternion.Euler(m_RotationalStart + m_RotationalOffset));
                        m_PlacedObject.Add(trackedImage.referenceImage.name, placedObject);
                        // if(trackedImage.referenceImage.name == "0")
                        // {
                        //     m_ObjectManager = placedObject.GetComponent<ObjectManager>();
                        //     m_ObjectManager.imageTracking = gameObject.GetComponent<ImageTracking>();
                        // }
                        // Debug.LogError("test 4");
                    } 
                    else if(trackedImage.referenceImage.name == "0")
                    {
                        GameObject placedObject = m_PlacedObject[trackedImage.referenceImage.name];
                        placedObject.transform.position =trackedImage.transform.position;
                        float scaleFactor = trackedImage.size.x * m_ScaleFactor;
                        placedObject.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
                        placedObject.transform.rotation = Quaternion.Euler(m_RotationalStart + m_RotationalOffset);
                    } 
                    else if( trackedImage.referenceImage.name != "0" && !m_PlacedObject.TryGetValue(trackedImage.referenceImage.name, out GameObject tempObject2))
                    {

                        GameObject placedObject = Instantiate(m_ObjectPrefabs[int.Parse(trackedImage.referenceImage.name)], trackedImage.transform.position, Quaternion.Euler(m_RotationalStart + m_RotationalOffset + new Vector3(0, 0, trackedImage.transform.rotation.eulerAngles.z)));

                       m_PlacedObject.Add(trackedImage.referenceImage.name, placedObject);

                    } 
                    else if(trackedImage.referenceImage.name != "0")
                    {
                        GameObject placedObject;
                        if(m_PlacedObject.TryGetValue(trackedImage.referenceImage.name, out GameObject tempObject3))
                        {
                            placedObject = tempObject3;
                            //placedObject.transform.position = SnapToGrid(trackedImage.transform.position, 0.02f, Vector3.zero);
                            placedObject.transform.position = trackedImage.transform.position;
                            float scaleFactor = trackedImage.size.x * m_ScaleFactor;
                            placedObject.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
                            //placedObject.transform.rotation = Quaternion.Lerp(placedObject.transform.rotation, trackedImage.transform.rotation, Time.deltaTime * smoothness);
                            //placedObject.transform.Find("point").transform.rotation = RoundZRotationToNearest45Degree(trackedImage.transform.rotation);
                            //placedObject.transform.rotation = Quaternion.Lerp(placedObject.transform.rotation, Quaternion.Euler(m_RotationalStart + m_RotationalOffset + new Vector3(0, 0, trackedImage.transform.rotation.eulerAngles.z)), Time.deltaTime * smoothness);
                        }
                    }
            
            }
             else if (m_PlacedObject.Count != 0 && trackedImage.trackingState == TrackingState.None && m_PlacedObject[trackedImage.referenceImage.name] != null)
             {
                 Destroy(m_PlacedObject[trackedImage.referenceImage.name]);
                 m_PlacedObject.Remove(trackedImage.referenceImage.name);
             }
        }
        
           
}

    public Quaternion RoundZRotationToNearest45Degree(Quaternion rotation)
    {
        
        float unroundedDivisor = rotation.y / 90f;
        int roundedDivisor = Mathf.RoundToInt(unroundedDivisor);
        float roundedRotation = (roundedDivisor * 90f) + 45;
        return Quaternion.Euler(0f, 0f, roundedRotation);
    }

    public Vector3 SnapToGrid(Vector3 position, float cellSpacing, Vector3 gridOrigin, bool setZToZero = false)
    {
        Debug.Log("snapping to grid");
        // calculate the snapped position on the X-Y plane
        Vector3 snappedPosition = new Vector3(Mathf.Round((position.x - gridOrigin.x) / cellSpacing) * cellSpacing,
                                              Mathf.Round((position.y - gridOrigin.y) / cellSpacing) * cellSpacing,
                                              Mathf.Round((position.z - gridOrigin.z) / cellSpacing) * cellSpacing
                                              );

        // create a new position with the snapped X-Y coordinates and the original Z coordinate
        Vector3 snappedPosition3D = new Vector3(snappedPosition.x, snappedPosition.y, position.z);
        //Debug.LogError("snappedPosition3D: " + snappedPosition3D + " position: " + position);

        // optionally set the Z coordinate to 0
        if (setZToZero)
        {
            snappedPosition3D.z = 0f;
        }

        //Grab Reference to gameobject 0 and check if it is null
        if (m_PlacedObject.TryGetValue("0", out GameObject tempObject))
        {
            snappedPosition3D = new Vector3(snappedPosition3D.x , snappedPosition3D.y,position.z);
        }
        else
        {
            snappedPosition3D = new Vector3(snappedPosition3D.x, snappedPosition3D.y, position.z + -.01f);
        }


        return snappedPosition3D;
    }


    public Quaternion CalculateRotationFromGameObjects(List<ARTrackedImage> objects)
{
    if (objects.Count < 3)
    {
        return Quaternion.identity;
    }

    Vector3 center = (objects[0].transform.position + objects[1].transform.position + objects[2].transform.position) / 3f;

    Matrix4x4 momentTensor = Matrix4x4.zero;
    for (int i = 0; i < 3; i++)
    {
        Vector3 r = objects[i].transform.position - center;
        momentTensor[0, 0] += r.y * r.y + r.z * r.z;
        momentTensor[1, 1] += r.z * r.z + r.x * r.x;
        momentTensor[2, 2] += r.x * r.x + r.y * r.y;
        momentTensor[0, 1] -= r.x * r.y;
        momentTensor[1, 2] -= r.y * r.z;
        momentTensor[2, 0] -= r.z * r.x;
        momentTensor[1, 0] = momentTensor[0, 1];
        momentTensor[2, 1] = momentTensor[1, 2];
        momentTensor[0, 2] = momentTensor[2, 0];
    }

    Matrix4x4 rotationMatrix = Matrix4x4.zero;
    Vector3 eulerAngles = Vector3.zero;

    if (momentTensor.determinant > 0)
    {
        Matrix4x4 inertiaTensor = momentTensor.inverse;
        Quaternion q = Quaternion.identity;
        q.w = Mathf.Sqrt(1 + inertiaTensor[0, 0] + inertiaTensor[1, 1] + inertiaTensor[2, 2]) / 2;
        q.x = (inertiaTensor[1, 2] - inertiaTensor[2, 1]) / (4 * q.w);
        q.y = (inertiaTensor[2, 0] - inertiaTensor[0, 2]) / (4 * q.w);
        q.z = (inertiaTensor[0, 1] - inertiaTensor[1, 0]) / (4 * q.w);
        rotationMatrix = Matrix4x4.TRS(Vector3.zero, q, Vector3.one);
        eulerAngles = rotationMatrix.rotation.eulerAngles;
        m_RotationalStart = rotationMatrix.rotation.eulerAngles;
    }
    else
    {
        //Debug.LogError("Unable to calculate rotation - moment tensor determinant is negative");
    }

    Quaternion rotation = Quaternion.Euler(eulerAngles);

    return rotation;
}

}