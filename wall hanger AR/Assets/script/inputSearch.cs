using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class inputSearch : MonoBehaviour, IPointerDownHandler
{
    public InputField search;
    public void OnPointerDown(PointerEventData eventData)
    {
        if (search.text.Length > 0) {
            holder.url = search.text;//overwrite stored url for retrieving image
            SceneManager.LoadScene(2);

        } 
    }
}