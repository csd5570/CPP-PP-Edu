#pragma once
#include <iostream>
#include "vec3.h"
#include "color.h"
using namespace std;

class Pixel
{
    int positionx;
    int positiony;
    vec3 color;

    void setPositionx(int posx);
    void setPositiony(int posy);
    void setColor(vec3 col);

    int getPositionx();
    int getPositiony();
    vec3 getColor();

    Pixel(int positionx, int positiony, vec3 color);

};
