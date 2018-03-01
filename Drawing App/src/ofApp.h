#pragma once

#include "ofMain.h"
#include "WaveHolder.hpp"
#include "Wave.hpp"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofPoint p;
        float amp = 50;
        float freq = .025;
        float offset = .5;
        float xOff = 100;
        float yNoise;
    //    PImage[] bubble = new PImage[1];
    
        float lifeMin = 600;
        float lifeMax = 1200;
        float padding = 6;
        int waveDotCount = 0;
        float x = 0;
        float y = 0;
        ofImage bubbleImage;
        int height;
        int width;
        ofColor c;
        int time;
    //    vector<Shimmer> shimmer;
        int NUM_WAVES = 3;

        WaveHolder waveHolder[3];
    
        ofMesh photo;
    //    //import processing.pdf.*;
    //    JSONObject drawing;
    //    PGraphics pg;
};
