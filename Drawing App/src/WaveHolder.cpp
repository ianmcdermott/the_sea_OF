//
//  WaveHolder.cpp
//  emptyExample
//
//  Created by TeenArtist on 2/27/18.
//
#include "WaveHolder.hpp"
#include "ofApp.h"
#include <math.h> 
#include "Wave.hpp"

WaveHolder::WaveHolder(){
    
};

void WaveHolder::setup(float _x, float _y, float _w, float _h, float aMin, float aMax, float fMin, float fMax, int _t){
    height = ofGetWindowHeight();
    ampMin = aMin;
    ampMax = aMax;
    freqMin = fMin;
    freqMax = fMax;
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    t = _t;
    c = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));

    
    freq = ofRandom(fMin, fMax);
    amp = ofRandom(aMin, aMax);
}

void WaveHolder::addWave(float lMin, float lMax){
    float scalar = ofMap(y, 0, height, 2, 5);
    waveArray.push_back(Wave(ofRandom(x, w), ofRandom(y, y+h*10), ofRandom(100, 300),  ofRandom(ampMin, ampMax), ofRandom(freqMin, freqMax), int(ofRandom(210, 240)), int(ofRandom(100, 255)), ofRandom(.5, 10),
                             ofRandom(5), ofRandom(200),  ofRandom(lMin, lMax), ofGetElapsedTimef(), t));
}

void WaveHolder::drawWave(){
    for (Wave w : waveArray) {
        w.update(w.yStart-sin(ofGetElapsedTimef()*2*freq)*amp);
        w.deleteNode();
        w.display();
    }
    ofSetColor(c);
    ofDrawCircle(x, y, 25);
}
void WaveHolder::update(){
    
    
    
    lifespan -= 10;
    if (waveArray.size() > 0) {
        for(int i = 0; i < waveArray.size(); i++){
            
            waveArray[i].run(5);
            
             if(waveArray[i].isDead()){
             
             
             
             waveArray.erase(waveArray.begin() + i);
             
             }
            
//            ofRemove(waveArray, removeIfDead(waveArray[i]));

        }
        
     }
}

                         
bool removeIfDead(Wave& w) {
    return w.isDead();
}

