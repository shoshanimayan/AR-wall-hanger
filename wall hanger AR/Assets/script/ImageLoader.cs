using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ImageLoader : MonoBehaviour
{
    public Image thisRenderer;
    public Material m;
    // automatically called when game started
    void Start()
    {
        StartCoroutine(LoadFromLikeCoroutine()); // execute the section independently

        // the following will be called even before the load finished
        thisRenderer.material.color = Color.red;
    }

    // this section will be run independently
    private IEnumerator LoadFromLikeCoroutine()
    {
        Debug.Log("Loading ....");
        WWW wwwLoader = new WWW(holder.url);   // create WWW object pointing to the url
        yield return wwwLoader;         // start loading whatever in that url ( delay happens here )

        Debug.Log("Loaded");
        thisRenderer.material.color = Color.white;              // set white
        thisRenderer.sprite = Sprite.Create(wwwLoader.texture, new Rect(0, 0, wwwLoader.texture.width, wwwLoader.texture.height), new Vector2(0.5f, 0.5f));
        thisRenderer.material.color = Color.white;              // set white

    }
}
