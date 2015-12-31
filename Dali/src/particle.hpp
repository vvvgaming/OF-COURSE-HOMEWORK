//
//  particle.hpp
//  Dali
//
//  Created by DEM0915 on 15/11/17.
//
//

#ifndef particle_hpp
#define particle_hpp

#include "ofMain.h"


class particle
{
    public :
    particle() ;
    particle( ofPoint _position , ofColor _color )
    {
        position = _position ;
        color = _color ;
        velocity = ofPoint ( ofRandom ( -5 , 5 ) , ofRandom ( -5 , 5 ) ) ;
        spawnPoint = _position ;
    }
    
    ofPoint position , velocity ;
    ofPoint acceleration ;          //平滑速度
    ofPoint spawnPoint ;            //复位成原始图像
    ofColor color ;
};

#endif /* particle_hpp */
