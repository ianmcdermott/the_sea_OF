//
//  Wave.hpp
//  emptyExample
//
//  Created by Ian McDermott on 2/19/18.
//
//
#pragma once
#ifndef Wave_hpp
#define Wave_hpp

#include <stdio.h>

#endif /* Wave_hpp */
class Wave{
public:
    Wave(float _x, float _y, float _rad, float a, float f, int h, int s, float xOff, float xVel, float ss, ofImage bI, float l, int fs, int b);
    
    void update(float yOff);
    void deleteNode();
    bool isDead();
    void display();
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    float r;
    ofColor c;
    float amp;
    float freq;
    float xO;
    float sineStart;
    float rStart;
    float rad;
    int hue, sat, bright;
    float life;
    float lifespan;
    float waveLife = 400;
    float alpha = 255;
    float frameStart;
    float radio = 0;
    vector <WaveDot> waveDots;
    //WaveDot[] waveDots;
    float xStart;
    float yStart;
    float x ;
    float y;
};
