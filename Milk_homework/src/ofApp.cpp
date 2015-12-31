#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255,250,250);
    ofSetBackgroundAuto(false);
    
    x = ofRandom(ofGetWidth()/2);
    y = ofRandom(ofGetHeight()/2);
//
//    rad = (int)(ofRandom( 100 ) );
//    ofSetcolor.set(255);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    drawCircle(mouseX,mouseY);
    radius = ofRandom(0,19);
    
    
    
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    //zuo biao ju zhong

    
     //ofTranslate(ofGetWidth()/2,ofGetHeight()/2);

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
//--------------------------------------------------------------
void ofApp::drawCircle(int x,int y){
    ofSetColor(197,186,89,250);
    ofCircle(x,y,radius);
}
