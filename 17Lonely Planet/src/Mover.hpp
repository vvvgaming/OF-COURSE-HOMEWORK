//
//  Mover.hpp
//  17Lonely Planet
//
//  Created by DEM0915 on 15/12/28.
//
//

#ifndef Mover_hpp
#define Mover_hpp

#include "ofMain.h"

class Mover {
public:
    Mover();
    Mover(float _posx, ofVec2f _vel, ofVec2f _accel);
    
    void update();
    void draw();
    void explode();
    
    ofPoint     pos;
    ofPoint     explodePos;
    ofPoint     prevPos;
    ofVec2f     velocity;
    ofVec2f     accel;
    
    bool exploded;
    
};

#endif /* Mover_hpp */
