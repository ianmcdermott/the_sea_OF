#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetupOpenGL(2560, 1440, OF_WINDOW);
    height = ofGetWindowHeight();
    width = ofGetWindowWidth();
    c = ofColor(255, 0, 0);
    for(int i = 0; i < NUM_WAVES; i++){
        waveHolder[i].setup(-width/4, height/padding*i-500, width+width/4, height/100, 200, 300, .005, .0075, 255-(3-i-1)*75);
    }
//    photo = new ofMesh();
    ofEnableSmoothing();
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    time = int(ofGetFrameNum());

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(180, 220, 255);
    for (int i = 0; i < height; i++) {
        float s = ofMap(i, height/2, height, 255, 50);
        ofSetColor(s/10, s/2.5, s);
        ofDrawLine(0, i, width, i);
    }
    c.setHsb(360, 255, 255);
    ofPushMatrix();
    ofTranslate(x+width/2, y);
    ofRectMode(OF_RECTMODE_CENTER);

    for(int i = 0; i < NUM_WAVES; i++){

        x = sin(time*freq+offset*i)*amp-width/2;
        if (i == 1) {
            ofPushMatrix();
            ofTranslate(width/2+x+xOff, y-600);
            ofRotate((x-180)/4);
            ofDrawCircle(0, 0, 50, 50);
//            shape(photo, 0, 0, 1000, 1000);
            //rect(0, 0, 500, 200);
            //image(pg, 0, 0);
            
            ofPopMatrix();
        } else     if (i == 0) {
            ofPushMatrix();
            ofTranslate(width-xOff, y-900);
            ofRotate((x-180)/4);
            //rect(0, 0, 500, 200);
            //image(pg, 0, 0);
            
            ofPopMatrix();
        } else if (i == 2) {
            ofPushMatrix();
            ofTranslate(width-xOff, y);
            ofRotate((y-80)/4);
            //image(pg, 0, 0);
            
            ofPopMatrix();
        }
        y = cos(time*freq+offset*i)*amp+height-200;
        
        if ((time % 10) == 0) {
            for (int j = 0; j < 20; j++) {
                waveHolder[i].addWave(lifeMin, lifeMax);
            }
        }
    
    waveHolder[i].drawWave();
    waveHolder[i].update();
    ofPopMatrix();
    xOff+=3;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
