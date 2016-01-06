#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    spiral.loadImage("CLS.jpg");
    
    sound.loadSound("Keep It Close with.mp3");
    sound.setLoop(true);
    sound.play();
    
    nBandsToGet = 199;
    fftSmoothed.assign(nBandsToGet, 0.0);
    ofEnableSmoothing();
    
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofSetLineWidth(2);
    
    for (int i =0; i < 4; i++){
        fireworks.push_back(Firework());
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    float * fft = ofSoundGetSpectrum(nBandsToGet);
    
    for (int i = 0;i < nBandsToGet; i++){
        fftSmoothed[i] *= 0.73f;
        
        if (fftSmoothed[i] < fft[i]) fftSmoothed[i] = fft[i];
        
    }
    
    
    
    
    if(ofGetElapsedTimef() > 28){
        display1 = true;
        
    }
    
    float sorting = ofRandom(30);
    
    if (fireworks.size() < 6 && sorting < 1) {
        
        fireworks.push_back(Firework());
        
    }
    
    int counter;
    
    for( vector<Firework>::iterator it=fireworks.begin(); it!=fireworks.end(); ){
        float noise = ofNoise(ofGetElapsedTimef()+ (counter * 100)) * 15.0;
        it->update(noise);
        counter++;
        
        if( it->bIsDead ){
            it = fireworks.erase(it);
            
        }else {
            it++;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,255,255, mouseX);
    
    spiral.draw(0, 0,ofGetWidth(), ofGetHeight());
    
    
    if(display2){
        ofSetColor(180,176,190,37);
        
        float width = ofGetWidth() / nBandsToGet;
        for (int i = 0;i < nBandsToGet; i++){
            float x = i* width;
            float height = fftSmoothed[i] * ofGetHeight() * 0.7;
            float y = ofGetHeight() - height;
            
            
            ofDrawRectangle(x, y, width-2, height);
            ofEnableSmoothing();
        }
        
    }
    
    
    
    if(display1){
        
        ofSetColor(0, 0, 0, 20);
        ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
        
        for( vector<Firework>::iterator it=fireworks.begin(); it!=fireworks.end(); ){
            it->draw();
            it++;
        }
        
        ofDrawBitmapString (ofToString(ofGetFrameRate()), ofPoint (20, 20));
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'f'){
        ofToggleFullscreen();
    }
    
    if(key == 'c'){
        display2 = !display2;
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
