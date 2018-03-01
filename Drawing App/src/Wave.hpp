//
//  Wave.hpp
//  emptyExample
//
//  Created by TeenArtist on 2/27/18.
//
#ifndef Wave_hpp
#define Wave_hpp
#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "WaveDot.hpp"
#endif /* Wave_hpp */
class Wave{
public:
    Wave(float _x, float _y, float _rad, float a, float f, int h, int s, float xOff, float xVel, float ss,  float l, int fs, int b);
    
    void setup();
    void update(float yOff);
    void deleteNode();
    void display();
    void run(float yOff);
    bool isDead();
    
    ofPoint loc, vel, acc;
    float r;
    ofColor c;
    float amp;
    float freq;
    float xO;
    float sineStart;
    float rStart;
    ofImage bubbleImage;
    float rad;
    int hue, sat, bright;
    float life;
//    JSONArray ellipseArray;
    float lifespan;
    float waveLife = 400;
    float alpha = 255;
    float frameStart;
    float radio = 0;
    vector <WaveDot> waveDots;
//    WaveDot[] waveDots;
    float xStart;
    float yStart;
    float x ;
    float y;
    
//    float[] randx = new float[5];
//    float[] randy = new float[5];
//    float[] randr = new float[5];
    
};
