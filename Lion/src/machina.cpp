//
//  machina.cpp
//  Lion
//
//  Created by DEM0915 on 15/12/7.
//
//

#include "machina.hpp"

void machina::setup(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    boundaryX = ofGetWidth() * 0.796;
    boundaryY = ofGetHeight() * 0.796;
    
    pos.set(ofRandom(boundaryX) , ofRandom(boundaryY));
    vel.set(ofRandomuf() * 0.718, ofRandomuf() * 0.718);
    radius = 1.9;
    
//    int roll = int(ofRandom(0, 4));
//    
//    if (roll == 0) {
//        pos.set(ofRandom(ofGetWidth()-boundaryX) , ofRandom(boundaryY + ofGetHeight()));
//        vel.set(ofRandomuf() * 0.718, ofRandomuf() * 0.718);
//        radius = 1.9;
//    }else if(roll == 1){
//        pos.set(ofRandom(boundaryX - 100) , ofRandom(boundaryY - 100));
//        vel.set(ofRandomuf() * 0.718, ofRandomuf() * 0.718);
//        radius = 3.7;
//    }else if (roll == 2){
//        pos.set(ofRandom(ofGetWidth()-boundaryX) , ofRandom(ofGetHeight() - boundaryY));
//        vel.set(ofRandomuf() * 0.718, ofRandomuf() * 0.718);
//        radius = 3.7;
//    }else if(roll == 3){
//        pos.set(ofRandom(boundaryX + ofGetWidth()) , ofRandom(boundaryY + ofGetHeight()));
//        vel.set(ofRandomuf() * 0.718, ofRandomuf() * 0.718);
//        radius = 3.7;
//    }
    
    
    //    radius = ofRandom(10, 25);
    //    col.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void machina::update(){
    pos += vel;
    
    if (pos.x > boundaryX || pos.x < 19) {
        vel.x *= -1;
    }
    
    if (pos.y > ofGetHeight() - boundaryY || pos.y < boundaryY) {
        vel.y *= -1;
        //vel.y = vel.y * (-1);
    }
    
    cout << ofRandomuf() << endl;
    
}

void machina::draw(){
    ofSetColor(col);
    ofCircle(pos, radius);
    
    
}
