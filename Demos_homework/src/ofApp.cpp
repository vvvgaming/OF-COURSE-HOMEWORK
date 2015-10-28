#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(120);
    
    rectWidth = 199;
    rectHeight = 109;
    barColor.set(0,0,255);
    circle1Color.set(39, 39, 37);
    circle2Color.set(39, 39, 38);
    circle3Color.set(35, 39, 47);



}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofFill();
    ofSetColor(barColor);
    
    
    ofRect(11, 15, 413, 613);
    ofSetColor(circle1Color);  //ALL
    
    ofRect(118, 15, rectWidth, rectHeight);
    ofSetColor(37, 39, 40);   //A
    
    ofRect(11, 224, 107, 214);
    ofSetColor(circle2Color);   //B
    
    //ofRect(118, 518, rect1Width, 214);
    //ofSetColor(39, 39, 38);  //B
    
    ofRect(118, 518, 199, 109);
    ofSetColor(circle2Color);  //C
    
    //ofRect(118, 518, rectWidth, rectHeight);
    //ofSetColor(39, 39, 38);  //C
    
    ofRect(317, 224, 107, 214);
    ofSetColor(circle3Color);   //D
    
    
    
    
    
    
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
