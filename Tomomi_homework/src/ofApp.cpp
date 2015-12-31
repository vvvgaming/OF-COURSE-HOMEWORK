#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(255, 255, 255);
    
    ofSetFrameRate(10);
    
    ofSetBackgroundAuto(false);

    myImage.loadImage("pixelskull.jpg");
    
    mySound.loadSound("I'm a Man.mp3");
    mySound.play();
    mySound.setSpeed(1.3);
    
    Chalkduster.loadFont("Chalkduster.ttf", 72);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<100; i++){
        for(int j=0; j<55; j++){
            ofSetColor(ofNoise(ofGetElapsedTimef()+i*0.005)*350);
            ofRect(i*15, j*15, 12, 12);
        }
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(186, 190, 167);
    float stringWidth = Chalkduster.stringWidth("I'M A MAN");
    float stringHeight = Chalkduster.stringHeight("I'M A MAN");
    
    
   // Chalkduster.drawString("I'M A MAN", ofGetHeight()/2,ofGetW  idth()/2);
    
    
    Chalkduster.drawString("I'M A MAN", ofGetWidth()/2-stringWidth/2,ofGetHeight()/2+stringHeight/2);
    
    
    
//    ofNoFill();
//    ofCircle(ofGetWidth()/2,ofGetHeight()/2, 25);//que li zhong xin ;
    
    ofSetColor(255);
    
    myImage.draw(314, 233, 64, 64);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
    float vol = ofMap(mouseY, ofGetHeight(), 0, 0, 1);
    mySound.setVolume(vol);
    
    float pan = ofMap(mouseX, 0, ofGetWidth(), -1, 1);
    mySound.setPan(pan);

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
