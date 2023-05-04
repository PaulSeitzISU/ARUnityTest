using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class MultiImageTracker : MonoBehaviour
{
    [SerializeField]
    private ARTrackedImageManager m_TrackedImageManager;

    private Dictionary<string, Vector3> m_ImagePositions = new Dictionary<string, Vector3>();

    private Dictionary<string, Quaternion> m_ImageRotations = new Dictionary<string, Quaternion>();

    public Dictionary<string, Vector3> ImagePositions
    {
        get { return m_ImagePositions; }
    }

    public Dictionary<string, Quaternion> ImageRotations
    {
        get { return m_ImageRotations; }
    }

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
                string imageName = trackedImage.referenceImage.name;

                // Update position and rotation dictionaries
                m_ImagePositions[imageName] = trackedImage.transform.position;
                m_ImageRotations[imageName] = trackedImage.transform.rotation;
            }
            else if (trackedImage.trackingState == TrackingState.None)
            {
                string imageName = trackedImage.referenceImage.name;

                // Remove position and rotation dictionaries for the lost image
                m_ImagePositions.Remove(imageName);
                m_ImageRotations.Remove(imageName);
            }
        }
    }
}
