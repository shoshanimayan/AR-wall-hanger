using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class mainMenu : MonoBehaviour, IPointerDownHandler
{
    public enum button { select, search }
    public button btn;
    public void OnPointerDown(PointerEventData eventData)
    {
        switch (btn)
        {
            case (button.select):
                SceneManager.LoadScene(3);
                break;
            case (button.search):
                Debug.Log(ImgSelection.sprite);
                SceneManager.LoadScene(1);
                break;

        }
    }
}
