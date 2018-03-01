//
//  WaveDot.cpp
//  emptyExample
//
//  Created by Ian McDermott on 2/28/18.
//
//

#include "WaveDot.hpp"
#include "ofMain.h"

WaveDot::WaveDot(float _x, float _y, float _r, int h, int s, int b) {
        x = _x;
        y = _y;
        rMax = _r;
        hue = h;
        sat = s;
        bright = b;
        waveDotCount++;
        c.r=255;
        c.g=0;
        c.b=0;
        ofSetColor(c);
};

    void WaveDot::update(float l, float ls, float index) {
        
        float i = index;
        if (i > rMax) i = rMax;
        r++;
        if (r >= rMax) r = rMax;
        
        r-= rMax-i;
        if (r < 0) {
            r = 0;
            //isDead = true;
        }
    }
    
    void WaveDot::display() {
        //scale(r/5);
        //tint(hue, sat, bright, .1);
        //image(bubbleImage, 0, 0);
        c.setHsb(0, 255, 255); // c is now bright red
        //ellipse(x-30, y-30, r/2, r/2);
        //ellipse(x-30, y+30, r/2, r/2);
        ofDrawCircle(x, y, r);
        //ellipse(x+30, y-30, r/2, r/2);
        //ellipse(x+30, y+30, r/2, r/2);
    }
