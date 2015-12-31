//
//  rectangle.cpp
//  Lion
//
//  Created by DEM0915 on 15/11/30.
//
//

#include "rectangle.hpp"

//------------------------------------------------------------------
rectangle::rectangle(){
    
}

//------------------------------------------------------------------
void rectangle::draw() {
    
    if(display){
        ofPushMatrix();
        ofTranslate(*this);
        
        
        float tailSpeed = abs(ofMap(distToCatch,0,ofGetWidth(),-0.05,-0.03,true));
        
        
        
        ofFill();
        
        ofSetColor(255);
        
        
        ofBeginShape();
        for (int i=0; i < tail.size(); i++) {
            
            float tailAmp = abs(ofMap(i,0,ofGetWidth(),-0.5,-0.03,true));
            float tailSpeed = abs(ofMap(i,0,ofGetWidth(),-0.1,-0.03,true));
            
            
            
            ofSetColor(20,24,59,100);
            
            ofLine(i, (sin(i*0.05-ofGetFrameNum()*0.1))*tailAmp*i*0.1,i,ofGetHeight());
            
            
            ofLine(-i, (sin(i*0.05-ofGetFrameNum()*0.1))*tailAmp*i*0.1,-i,ofGetHeight());
            
            
        }
        
        
        
        ofEndShape(false);
        
        ofPopMatrix();
    }
    
}

//------------------------------------------------------------------
void rectangle::update(ofPoint _start){
    
    
    x = ofGetWidth()*0.5;
    y = _start.y + sin(ofGetFrameNum()*0.01)*2;
    
    
    tail.push_back(*this);
    
    
    if(tail.size() >= ofGetWidth()*0.5){
        
        tail.erase(tail.end());
    }
    
    
}
