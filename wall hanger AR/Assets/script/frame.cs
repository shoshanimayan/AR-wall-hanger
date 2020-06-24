using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class frame : MonoBehaviour, IPointerDownHandler
{
    //ui class for menu scene
    public void OnPointerDown(PointerEventData eventData)
    {
        //Debug.Log("down");
        ImgSelection.sprite = GetComponent<Image>().sprite;
    }
}