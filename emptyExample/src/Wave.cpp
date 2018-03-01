//
//  Wave.cpp
//  emptyExample
//
//  Created by Ian McDermott on 2/19/18.
//
//

#include "Wave.hpp"
Wave::Wave(float _x, float _y, float _rad, float a, float f, int h, int s, float xOff, float xVel, float ss, ofImage bI, float l, int fs, int b){
    rStart = _rad;
    bubbleImage = bI;
    
    xO = xOff;
    sineStart = ss;
    rad =  _rad;
    hue = h;
    sat = s;
    bright = b;
    life = l;
    lifespan = l;
    freq = f;
    amp = a;
    frameStart = fs;
    waveDots = new vector <WaveDot>();
    xStart = _x;
    yStart = _y;
    waveDots.add(new WaveDot(xStart, yStart, 0, hue, sat, bright));
}

void Wave::update(float yOff);
void Wave::deleteNode();
bool Wave::isDead();
void Wave::display();
