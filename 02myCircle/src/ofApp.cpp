#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    ofEnableAlphaBlending();
    ofSetCircleResolution(70);
    
   }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(255, 63, 63, 200);
    ofDrawCircle(0, -150, 200);
    
    ofRotateZ(120);
    ofSetColor(63, 63, 255, 200);
    ofDrawCircle(0, -150, 200);
    
    ofRotateZ(120);
    ofSetColor(63, 255, 63, 200);
    ofDrawCircle(0, -150, 200);
    
    
    
    
    
//-------------绘制半圆---------------------
//    ofSetColor(189, 176, 170);
//    ofPath path;
//    path.moveTo(300 + 200, 300);
//    path.arc(300, 300, 200, 200, 0, 180);
//    path.setFilled(false);
//    path.setStrokeWidth(1);
//    path.draw();

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
