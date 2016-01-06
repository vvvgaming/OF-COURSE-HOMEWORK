//
//  fireworkList.hpp
//  17Lonely Planet
//
//  Created by DEM0915 on 15/12/28.
//
//

#ifndef fireworkList_hpp
#define fireworkList_hpp
#include "ofMain.h"
#include "Mover.hpp"

class Firework {
public:
    
    Firework();
    void update(float _noise);
    void draw();
    
    vector <Mover> moverList;
    ofVec2f vel;
    float posX;
    ofVec2f accel;
    bool exploded;
    bool bIsDead;
    float dieCount;
    float noise;
    ofColor color;
#endif /* fireworkList_hpp */
