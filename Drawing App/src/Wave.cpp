//
//  Wave.cpp
//  emptyExample
//
//  Created by TeenArtist on 2/27/18.
//

#include "Wave.hpp"
Wave::Wave(float _x, float _y, float _rad, float a, float f, int h, int s, float xOff, float xVel, float ss,  float l, int fs, int b){
    rStart = _rad;
    
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
//    waveDots = new vector <WaveDot>();
    xStart = _x;
    yStart = _y;
//    waveDots.push_back(WaveDot(xStart, yStart, 0, hue, sat, bright));
};

void Wave::setup(){
    
    
}

void Wave::update(float yOff){
    if (sizeof(waveDots) > 1) {
       
        //if there is still "life(change to growth)" remaining add a new node
        if (life > 0) {
            if (life > 2) {
                r = ofMap(life, lifespan, lifespan/2, 0, rStart);//*noise(frameCount/100)*10;
            } else {
                r = ofMap(life, lifespan/2, 0, rStart, 0);
            }
            x = xStart-frameStart*xO+(ofGetElapsedTimef())*xO;
            y = yOff;
            waveDots.push_back(WaveDot(x, y, r, hue, sat, bright));
            life-= 2;
        }
        waveLife -= 1;
    }
    
    //clean up dead dots
    for (int i = waveDots.size()-1; i > 0; i--) {
//        if (waveDots[i].isDead) waveDots.erase[i];
    }
}
void Wave::deleteNode(){
    
}
void Wave::display(){
//    imageMode(CENTER);
//    ofNoStroke();
    for (int i =0; i < sizeof(waveDots); i++) {
        WaveDot wd = waveDots[i];
        waveDots[i].update(life, lifespan, i);
        if (wd.x > -200 && wd.x < ofGetWidth()+200 && wd.y < ofGetHeight()+200) {
            ofPushMatrix();
            //    for (int i = 0; i < randx.length; i++) {
            //}
            //translate(w.x, w.y);
            wd.display();
            //ellipse(0, 0, w.r,w.r);
            ofPopMatrix();
        }
    }
}


bool Wave::isDead(){
    
    if(lifespan < 0.0){
        return true;
    }
    else {
        return false;
    }
    
    
}

void Wave::run(float yOff){
    update(yOff);
    display();
}



