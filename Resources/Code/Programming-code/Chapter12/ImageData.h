#pragma once
#include "Pixel.h"
#include <vector>
#include <string>
using namespace std;

class ImageData{
    vector<vector<Pixel>> Image;
    int width;
    int height;
    int file_format;
    int filename;

    void setImage(vector<vector<Pixel>> Img);
    void setWidth(int wid);
    void setHeight(int hei);

    vector<vector<Pixel>> getImage();
    int getWidth();
    int getHeight();

    ImageData(string name);


    

};