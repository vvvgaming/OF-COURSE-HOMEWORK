#pragma once

#include "ofMain.h"
#include "rectangle.hpp"
#include "Mover.hpp"
#include "machina.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
        int Number;
        rectangle wave;
        ofSoundPlayer Lent;
        
        ofImage boat;
        ofImage petal;
        ofImage bird;
        
        
        vector <ofPoint> pos;
        vector <ofPoint> vel;
        vector <ofPoint> wForce;
        vector <ofPoint> gForce;
        vector <Mover> movers;
    
    
        vector <machina> machinas;
        int machinasAlpha;
        bool display2 = true;
        bool display1 = true;
    
		
};
