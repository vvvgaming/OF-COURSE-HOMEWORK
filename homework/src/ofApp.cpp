#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(100);
    ofSetCircleResolution(100);
    ofBackground(0);
    ofSetBackgroundAuto(false);
        

}

//--------------------------------------------------------------
void ofApp::update(){
    
    color.set( ofRandom(255), ofRandom(255), ofRandom(255));
    
    x = ofRandom( ofGetWidth());
    
    y = ofRandom( ofGetHeight());
    
    

    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, ofRandom(8));
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
