using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class nav : MonoBehaviour, IPointerDownHandler
{
    public enum button { back, next }
    public button btn;
    public void OnPointerDown(PointerEventData eventData)
    {
        switch (btn)
        {
            case (button.back):

                SceneManager.LoadScene(1);
                break;
            case (button.next):
                Debug.Log(ImgSelection.sprite);
                SceneManager.LoadScene(2);
                break;

        }
    }
}
