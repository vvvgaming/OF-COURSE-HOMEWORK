#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    
    for (int i = 0; i < 28; i++){
        machinas.push_back(machina());
    }
    
    for (int i = 0; i < machinas.size(); i++){
        machinas[i].setup();
    }

   
    boat.loadImage("boat.jpg");
    petal.loadImage("petal.png");
    bird.loadImage("bird.png");
    Lent.loadSound("Alfred Brendel.mp3");
    Lent.play();
    
    ofBackground(0);
    ofEnableAlphaBlending();
    
    
    
    for(int y = 0; y < bird.getHeight(); y++){
        for(int x = 0; x < bird.getWidth(); x+=2){
            
            
            ofVec2f pixelPosition;
            
            pixelPosition.x = ofMap(x, 0, boat.getWidth(), 0, ofGetWidth());
            pixelPosition.y = ofMap(y, 0, boat.getHeight(), 0, ofGetHeight());
            
            ofColor c = bird.getPixelsRef().getColor(x, y);
            // ofColor cor = ofColor(c.r, c.g, c.b, 100);
            int b = c.getBrightness();
            
            if(b < 230){
                Mover m = *new Mover(pixelPosition, c);
                movers.push_back(m);
            }
            
        }
    }
    
    Number = 745;
    
    for (int i=0; i<Number; i++) {
        ofPoint tempPos;
        tempPos.x = ofRandom(10, 620);
        tempPos.y = ofRandom(-500, -1900);
        pos.push_back(tempPos);
     
    }
    
    
    for (int i=0; i<Number; i++) {
        ofPoint tempVel;
        tempVel.x = 0;
        tempVel.y = 0;
        vel.push_back(tempVel);
    }
    
    
    
    
    for (int i=0; i<Number; i++) {
        ofPoint tempW;
        tempW.x = ofRandom(-0.002 * ofNoise(i*0.71),0.0032 * ofNoise(i*0.25));
        tempW.y = 0;
        wForce.push_back(tempW);
    }
    
    for (int i=0; i<Number; i++) {
        ofPoint tempG;
        tempG.x = 0;
        tempG.y = ofRandom(0.0001, 0.0007);
        gForce.push_back(tempG);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < machinas.size(); i++){
        machinas[i].update();
    }
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    
    for(int i = 0; i < movers.size(); i++){
        
        movers[i].update();
        movers[i].airResistance();
        movers[i].checkEdges();
        
        if(movers[i].isBack) movers[i].goBack();
    }
    
    
    
    
    wave.update(ofPoint(ofGetWidth()*0.25,ofGetHeight()*0.94));
   
    
    for (int i=0; i<Number; i++) {
        
        if (pos[i].x < 0){
            pos[i].x = ofRandom(10, 620);
            pos[i].y = ofRandom(-500, -1024);
        }
        
        if (pos[i].x > ofGetWidth()){
            pos[i].x = ofRandom(10, 620);
            pos[i].y = ofRandom(-500, -1024);        }
        
        
        if (pos[i].y > ofGetHeight()){
            pos[i].x = ofRandom(10, 620);
            pos[i].y = ofRandom(-500, -1024);
        }
        
    }
    
    
    
    for (int i=0; i< Number; i++) {
        
        vel[i].x = vel[i].x + gForce[i].x;
        vel[i].y = vel[i].y + gForce[i].y;
        
        vel[i].x = vel[i].x + wForce[i].x;
        vel[i].y = vel[i].y + wForce[i].y;
        
        
        pos[i]+=vel[i];
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,255,255, mouseX);
    boat.draw(0,0,ofGetWidth(),ofGetHeight());
    wave.draw();
    if(display1){
    for (int i = 0; i < machinas.size(); i++){
        machinas[i].draw();
    }
    
    for (int i = 0; i < machinas.size()-1; i++){
        for (int j = i; j < machinas.size()-1; j++){
            float distance = machinas[i].pos.distance(machinas[j].pos);
            cout << distance << endl;
            float lineAlpha = ofMap(distance, 0, 172, 70, 0);
            ofSetColor(255, 255, 255, lineAlpha);
            ofLine(machinas[i].pos, machinas[j].pos);
            
        }
    }
    
    ofPoint mousePos;
    mousePos.x = mouseX;
    mousePos.y = mouseY;
    
    for(int i = 0;i < machinas.size();i++){
        float r = machinas[i].pos.distance(mousePos);
        if(r < 100){
            machinas[i].col.a = machinasAlpha;
            machinasAlpha = ofMap(r,0,100,170,0);
            
        }
    }
    }
    
    
    
    
    for(int i = 0; i < movers.size(); i++){
        
        movers[i].draw();
   
        
    }
    
//        ofSetColor(255);
//        boat.draw(0,0,ofGetWidth(),ofGetHeight());
//        wave.draw();
    
    if(display2){
        for (int i =0; i<Number; i++) {
        ofSetColor(255);
        petal.draw(pos[i]);
        
        }
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
    
    if(key == 'e'){
        display1 = !display1;
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
    
    for(int i = 0; i < movers.size(); i++){
        movers[i].isBack = !movers[i].isBack;
        
        if(!movers[i].isBack){
            ofVec2f force = ofVec2f(ofRandom(-100,100), ofRandom(-100,100));
            movers[i].applyForce(force);
        }
        
        
    }

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
