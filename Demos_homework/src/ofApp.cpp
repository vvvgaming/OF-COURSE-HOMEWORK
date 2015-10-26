#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(1200);
    
    rectWidth = 199;
    rectHeight = 109;
    //rect1Width = 107;
    



}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofFill();
    
    
    ofRect(11, 15, 413, 613);
    ofSetColor(39, 39, 37);  //ALL
    
    ofRect(118, 15, rectWidth, rectHeight);
    ofSetColor(37, 39, 40);   //A
    
    ofRect(11, 224, 107, 214);
    ofSetColor(39, 39, 38);   //B
    
    //ofRect(118, 518, rect1Width, 214);
    //ofSetColor(39, 39, 38);  //B
    
    ofRect(118, 518, 199, 109);
    ofSetColor(39, 39, 38);  //C
    
    //ofRect(118, 518, rectWidth, rectHeight);
    //ofSetColor(39, 39, 38);  //C
    
    ofRect(317, 224, 107, 214);
    ofSetColor(35, 39, 47);   //D
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'a') {
        rectWidth = rectWidth + 10;
    }
    
    if (key == 'd') {
        rectWidth = rectWidth - 10;
    }
    
    
    if (key == 'w') {
        rectHeight = rectHeight + 10;
    }
    
    if (key == 's') {
        rectHeight = rectHeight - 10;
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
