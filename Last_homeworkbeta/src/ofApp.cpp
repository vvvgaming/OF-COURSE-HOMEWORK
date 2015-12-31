#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myImage.loadImage("plama.jpg");
    
    sound.loadSound("Can't Win 'em All.mp3");
    sound.setLoop(true);
    sound.play();
    
    nBandsToGet = 370;
    fftSmoothed.assign(nBandsToGet, 0.0);
    
    ofBackground(0);
    
    ofEnableSmoothing();
    
    duration = 1;
    timer = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    float * fft = ofSoundGetSpectrum(nBandsToGet);
    
    for (int i = 0;i < nBandsToGet; i++){
        
        fftSmoothed[i] *= 0.9217f;
        
        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
        
    }
    
    if (playAnimation) {
        timer = ofGetElapsedTimef() - startTime;
        if (timer > duration){
            playAnimation = false;
        }
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    myImage.draw(0, 0, 800, 550);
    
    float width = ofGetWidth() / nBandsToGet;
    for (int i = 0;i < nBandsToGet; i++){
        float x = i * width;
        float height = fftSmoothed[i] * ofGetHeight();
        float y = ofGetHeight() - height;
        
        //ofSetColor(255,255,255,55);
        ofRect(x, y, width, height);
        ofEnableSmoothing();
    }
    
    
    
    if (playAnimation) {
        float radius = ofMap(timer, 0, duration, 10, 50);
        ofCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    }
    


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' ') {
        playAnimation = true;
        startTime = ofGetElapsedTimef();
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
