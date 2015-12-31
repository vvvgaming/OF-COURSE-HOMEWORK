//
//  machina.hpp
//  Lion
//
//  Created by DEM0915 on 15/12/7.
//
//

#ifndef machina_hpp
#define machina_hpp

#include "ofMain.h"

class machina {
public:
    void setup();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    float radius;
    ofColor col;
    
    float boundaryX;
    float boundaryY;
};

#endif /* machina_hpp */
