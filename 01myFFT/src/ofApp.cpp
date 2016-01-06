#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofSetCircleResolution(91);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofBackground(7, 7, 7, 70);
    
    Xgalaxy.load("Xgalaxy.jpg");
    
    nBandsToGet = 124;
//    fftSmoothed.assign(nBandsToGet, 0.0);
//    ofEnableSmoothing();
    
    
    Fade.load("Take Me Home_Veaxic.mp3");
    Fade.setLoop(true);
    Fade.play();
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSoundUpdate();
    fft = ofSoundGetSpectrum(nBandsToGet);
    
//    float *fft = ofSoundGetSpectrum(nBandsToGet);
//    for (int i = 0;i < nBandsToGet; i++){
//        fftSmoothed[i] *= 0.98f;
//        
//        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
//        
//    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(55);
    Xgalaxy.draw(0,0, ofGetWidth(), ofGetHeight());
    
    float width = float(ofGetWidth()) / float(nBandsToGet) / 2.0f;
    
    for (int i = 0; i < nBandsToGet; i++) {
        int b = float(255) / float(nBandsToGet) * i;
        int g = 70 - b ;
        int r = 170 - b;
        int alpha = 71;
        
        ofSetColor(r, g, b, alpha);
        
        ofDrawCircle(ofGetWidth()/2 + width * i, ofGetHeight()/2, fft[i] * 100);
        
        ofDrawCircle(ofGetWidth()/2 - width * i, ofGetHeight()/2, fft[i] * 100);

        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'f'){
        ofToggleFullscreen();
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
