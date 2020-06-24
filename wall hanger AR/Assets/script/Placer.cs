using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
[RequireComponent(typeof(ARRaycastManager))]
public class Placer : MonoBehaviour
{
    public Image img;//where image is shown
    public GameObject prefab; //wall frame objeect
    private GameObject spawned;
    private ARRaycastManager aRRaycastManager;
    private Vector2 touchPosition;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    // Start is called before the first frame update
    void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        if (SceneManager.GetActiveScene().name == "SampleScene")
            img.sprite = ImgSelection.sprite;//overwrite set sprite if correct scene
    }
    //set AR object location
    bool TryGetPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount ==1)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
        touchPosition = default;
        return false;
    }
    //change size
    public void zoom(float inc) {
        prefab.transform.localScale = new Vector3(Mathf.Abs(prefab.transform.localScale.x+inc), Mathf.Abs(prefab.transform.localScale.y+inc), Mathf.Abs(prefab.transform.localScale.z+inc));
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount == 1) //one finger to set position
        {
            touchPosition = Input.GetTouch(0).position;
            if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.All))
            {
                var hitPose = hits[0].pose;
                if (spawned == null)
                {
                    spawned = prefab;
                    prefab.SetActive(true);
                    if(SceneManager.GetActiveScene().name=="SampleScene")
                        img.sprite = ImgSelection.sprite;

                    prefab.transform.position = hitPose.position;
                    prefab.transform.rotation = hitPose.rotation;
                    spawned = prefab;

                }
                else
                {
                    spawned.transform.position = hitPose.position;
                }
            }
        }
        else if (Input.touchCount == 2) {//two fingers to change size
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

            float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float currentMagnitude = (touchZero.position - touchOne.position).magnitude;

            float difference = currentMagnitude - prevMagnitude;

            zoom(difference * 0.001f);
        }

    }
}