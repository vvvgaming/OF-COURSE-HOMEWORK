//
//  rectangle.hpp
//  Lion
//
//  Created by DEM0915 on 15/11/30.
//
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include "ofMain.h"

class rectangle : public ofPoint {
    
public:
    
    rectangle();
    
    void	draw();
    void	update(ofPoint _start);
    
    
    float offsetY;
    
    
    float distToCatch;
    
    
    
    float r,g,b;
    
    
    
    vector < ofPoint > tail;
    
    bool display = true;
    
    
    
};


#endif /* rectangle_hpp */
