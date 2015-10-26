#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    myCircleX = 0;
    myCircleY = 100;


}

//--------------------------------------------------------------
void ofApp::update(){
    
    myCircleX++;
    if (myCircleX > 600)
        myCircleX = 0;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(235, 246, 247);
    
    ofSetColor(12, 12, 12);
    ofCircle(myCircleX, myCircleY, 40);
    
    ofCircle(100, 100, 40);
    ofSetColor(120, 194, 196);     //1
    
    ofCircle(100, 200, 40);
    ofSetColor(142, 53, 74);  //2
    
    ofCircle(100, 300, 40);
    ofSetColor(11, 52, 110);  //3
    
    ofCircle(100, 400, 40);
    ofSetColor(134, 120, 53);  //4
    
    ofCircle(100, 500, 40);
    ofSetColor(13, 86, 97);  //5
    
    ofCircle(200, 100, 40);
    ofSetColor(221, 210, 59);  //6
    
    ofCircle(200, 200, 40);
    ofSetColor(137, 145, 107);  //7
    
    ofCircle(200, 300, 40);
    ofSetColor(15, 37,64);  //8
    
    ofCircle(200, 400, 40);
    ofSetColor(180, 129, 187);  //9
    
    ofCircle(200, 500, 40);
    ofSetColor(63, 43, 54);  //10
    
    ofCircle(300, 100, 40);
    ofSetColor(111, 51, 129);  //11
    
    ofCircle(300, 200, 40);
    ofSetColor(87, 76, 87);  //12
    
    ofCircle(300, 300, 40);
    ofSetColor(168, 216, 185);  //13
    
    ofCircle(300, 400, 40);
    ofSetColor(249, 191, 69);  //14
    
    ofCircle(300, 500, 40);
    ofSetColor(247, 92, 47);  //15
    
    ofCircle(400, 100, 40);
    ofSetColor(46, 169, 223);  //16
    
    ofCircle(400, 200, 40);
    ofSetColor(8, 25, 45);  //17
    
    ofCircle(400, 300, 40);
    ofSetColor(0, 98, 132);  //18
    
    ofCircle(400, 400, 40);
    ofSetColor(110, 117, 164);  //19
    
    ofCircle(400, 500, 40);
    ofSetColor(171, 59, 58);  //20
    
    ofCircle(500, 100, 40);
    ofSetColor(120, 194, 196);  //21
    
    ofCircle(500, 200, 40);
    ofSetColor(189, 192, 186);  //22
    
    ofCircle(500, 300, 40);
    ofSetColor(101, 103, 101);  //23
    
    ofCircle(500, 400, 40);
    ofSetColor(123, 144, 210);  //24
    
    ofCircle(500, 500, 40);
    ofSetColor(54, 86, 60);  //25
    
    
    
    

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
