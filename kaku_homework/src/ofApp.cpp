#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    ofBackground(255, 255, 255);
//    ofSetFrameRate(100);
    
    myVideo.loadMovie("Dream Bigger.mp4");
    myVideo.play();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    myVideo.update();
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myVideo.draw(0, 0,mouseX, mouseY);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'v') {
        if (myVideo.isPlaying()) {
            myVideo.stop();
        }
        else {
            myVideo.play();
        }
    }
    
    
    
    if (key == OF_KEY_LEFT){
        int preFrame = myVideo.getCurrentFrame() - 1;
        myVideo.setFrame(preFrame);
        
    }
    
    if (key == OF_KEY_RIGHT){
        int nextFrame = myVideo.getCurrentFrame() + 1;
        myVideo.setFrame(nextFrame);
        
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
