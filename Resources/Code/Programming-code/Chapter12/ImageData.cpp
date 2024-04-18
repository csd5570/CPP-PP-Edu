#include "ImageData.h"

void ImageData::setImage(vector<vector<Pixel>> Img){
    Image = img;
}

void ImageData::setWidth(int wid){
    width = wid;
}

void ImageData::setHeight(int hei){
    height = hei;
}

vector<vector<Pixel>> ImageData::getImage(){
    return Image;
}

int ImageData::getWidth(){
    return width;
}

int ImageData::getHeight(){
    return height;
}

ImageData::ImageData(string name){
    filename = name;
    ifstream fin;
    fin.open(filename.c_str(), ios::out | ios::trunc);
    if (!fin)
    {
        throw string("Cannot open input file <") + filename + to_string(">.");
    }
    string s;
    fin >> s;
    fin >> width >> height >> file_format; 

    Image = vector<vector<Pixel>>(width, vector<Pixel>(height));

    for (int j = 0; j < height; ++j) 
    {
        for (int i = 0; i < width; ++i)
        {
            double x,y,z;
            fin>>x>>y>>z;
            vec3 color(x,y,z);
            Pixel p(j,i,color);
            Image[j][i] = p;
        }
    }
}    