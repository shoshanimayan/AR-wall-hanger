﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine.Networking;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class ImgSelection : MonoBehaviour
{
    public static Sprite sprite;
    // Start is called before the first frame update

    private void Start()
    {

        


    }

    

    // Update is called once per frame
    void Update()
    {
        if (sprite!=null) { SceneManager.LoadScene(1); }
    }
}
