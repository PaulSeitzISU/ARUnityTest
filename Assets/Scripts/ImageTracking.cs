using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : MonoBehaviour
{
    [SerializeField]
    private ARTrackedImageManager m_TrackedImageManager;

    [SerializeField]
    private GameObject m_PlanePrefab;

    private Dictionary<string, GameObject> m_PlacedObjects = new Dictionary<string, GameObject>();

    private List<ARTrackedImage> m_TrackedImages = new List<ARTrackedImage>();

    private void Awake()
    {
        m_TrackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    private void OnDestroy()
    {
        m_TrackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            if (trackedImage.trackingState == TrackingState.Tracking)
            {
                m_TrackedImages.Add(trackedImage);
            }
            else if (trackedImage.trackingState == TrackingState.None)
            {
                m_TrackedImages.Remove(trackedImage);

                if (m_PlacedObjects.ContainsKey(trackedImage.referenceImage.name))
                {
                    Destroy(m_PlacedObjects[trackedImage.referenceImage.name]);
                    m_PlacedObjects.Remove(trackedImage.referenceImage.name);
                }
            }
        }

        if (m_TrackedImages.Count >= 4)
        {
            Vector3 center = Vector3.zero;
            foreach (ARTrackedImage trackedImage in m_TrackedImages)
            {
                center += trackedImage.transform.position;
            }
            center /= m_TrackedImages.Count;

            Quaternion rotation = Quaternion.identity;
            if (m_TrackedImages.Count == 4)
            {
                Vector3 corner1 = m_TrackedImages[0].transform.position;
                Vector3 corner2 = m_TrackedImages[1].transform.position;
                Vector3 corner3 = m_TrackedImages[2].transform.position;
                Vector3 corner4 = m_TrackedImages[3].transform.position;

                Vector3 side1 = corner2 - corner1;
                Vector3 side2 = corner3 - corner1;
                Vector3 side3 = corner4 - corner1;

                Vector3 normal = Vector3.Cross(side1, side2).normalized;
                rotation = Quaternion.LookRotation(normal, side3);
            }

            if (!m_PlacedObjects.ContainsKey("Plane"))
            {
                GameObject plane = Instantiate(m_PlanePrefab, center, rotation);
                plane.name = "Plane";
                m_PlacedObjects.Add("Plane", plane);
            }
            else
            {
                m_PlacedObjects["Plane"].transform.position = center;
                m_PlacedObjects["Plane"].transform.rotation = rotation;
            }
        }
        else if (m_PlacedObjects.ContainsKey("Plane"))
        {
            Destroy(m_PlacedObjects["Plane"]);
            m_PlacedObjects.Remove("Plane");
        }
    }
}