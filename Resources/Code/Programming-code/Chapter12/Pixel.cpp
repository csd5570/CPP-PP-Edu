#include "pixel.h"

void Pixel::setPositionx(int posx){
    positionx = posx;
}

void Pixel::setPositiony(int posy){
    positiony = posy;
}

void Pixel::setColor(vec3 col){
    color = col;
}

int Pixel::getPositionx(){
    return positionx;
}

int Pixel::getPositiony(){
    return positiony;
}

vec3 Pixel::getColor(){
    return color;
}

Pixel::Pixel(int positionx, int positiony, vec3 color){
    this->positionx = positionx;
    this->positiony = positiony;
    this->color = color;
}