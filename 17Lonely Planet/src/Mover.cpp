//
//  Mover.cpp
//  17Lonely Planet
//
//  Created by DEM0915 on 15/12/28.
//
//

#include "Mover.hpp"

Mover::Mover(float _posx, ofVec2f _vel, ofVec2f _accel) {
    
    pos.x = _posx;
    pos.y = ofGetHeight();
    
    accel = _accel;
    velocity = _vel;
    
    exploded = false;
    
}

void Mover::update() {
    
    if (exploded) {
        
        if (abs(velocity.length()) < 2.0) {
            exploded = false;
        }
        accel = (explodePos - pos) * 0.001f;
        
    } else {
        
        accel = ofVec2f (0, 0.1);
        
    }
    
    prevPos = pos;
    velocity += accel;
    pos += velocity;
    
    //    velocity *= 0.97;
    
}

void Mover::draw() {
    //ofCircle( pos, 1 );
    
    if (pos != prevPos) {
        ofLine(prevPos, pos);
    }
    
}

void Mover::explode() {
    
    exploded = true;
    explodePos = pos;
    
    float angle = ofDegToRad(ofRandom(360));
    float x = cos(angle);
    float y = sin(angle);
    
    float mult = ofRandom(3.0f, 8.0f);
    
    velocity.set (x*mult, y*mult);
    
}
