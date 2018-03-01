//
//  WaveHolder.hpp
//  emptyExample
//
//  Created by TeenArtist on 2/27/18.
//

#ifndef WaveHolder_hpp
#define WaveHolder_hpp
#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "Wave.hpp"


#endif /* WaveHolder_hpp */

class WaveHolder{
    public:
        WaveHolder();
        void setup(float _x, float _y, float _w, float _h, float aMin, float aMax, float fMin, float fMax, int _t);
        void addWave(float lMin, float lMax);
        void drawWave();
        void update();
    
        vector<Wave> waveArray;
        float ampMin;
        float ampMax;
        float freqMin;
        float freqMax;
        float lifespan = 1000;
        float x, y, w, h;
        int t;
        ofColor c;
        float newFreq, newAmp;
        int height;
    
        float freq;
        float amp;
    
        bool removeIfDead(Wave& w);
};
