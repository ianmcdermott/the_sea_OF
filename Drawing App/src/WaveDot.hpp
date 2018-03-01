//
//  WaveDot.hpp
//  emptyExample
//
//  Created by Ian McDermott on 2/28/18.
//
//

#ifndef WaveDot_hpp
#define WaveDot_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* WaveDot_hpp */
class WaveDot{
    public:
    WaveDot(float _x, float _y, float _r, int h, int s, int b);
    void setup();
    void update(float l, float ls, float index);
    void deleteNode();
    void display();
    
    float x, y, rMax, rStart;
    int hue, sat, bright;
    float r = 0;
    float initialRadius;
    bool isDead = false;
    int waveDotCount = 0;
    ofColor c;
};
