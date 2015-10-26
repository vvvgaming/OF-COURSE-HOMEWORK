#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleX = -5000;
    circleY = -5000;
    circleSize = 50;
    
    xSpeed = 0;
    ySpeed = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    //circleX = circleX - 19;
    //circleY = circleY + 19;
    //circleX = circleX + xSpeed;
    //circleY = circleY + ySpeed;
    rise += 1.1;
    angle += 1.1;
    num = int(ofMap(mouseY,0,ofGetHeight(),3,20));

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofCircle(circleX, circleY,circleSize);
    t = t + 0.1;//t += 0.1
    ofCircle(circleX,circleY+100 * sin(t), 50);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
       }

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    //shu biao yi dong
    circleX = 500;
   circleY = 500;
    if (x > ofGetHeight() / 2){
        xSpeed = 1;
    }
    else {
        xSpeed = -1;
    }

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    //shu biao tuo zhan
    //circleX = x;
    //circleY = y;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //shu biao dian ji
    //circleX = x;
   // circleY = y;
    
    circleX = 500;
    circleY = 500;

    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    circleX = x;
    circleY = y;

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
