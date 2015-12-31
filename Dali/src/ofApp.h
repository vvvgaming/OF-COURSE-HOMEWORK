#pragma once

#include "ofMain.h"
#include "particle.hpp"

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
    
    
        //图片像素化
        ofImage image ;                 //图像载入
        int sampling ;                  //像素滑动
        vector<particle> particles ;    //储存像素的集合
        int numParticles ;              //粒子系统
    
        //弹起和下落的功能载体
        bool springEnabled ;        //切换到粒子的原始位置
        float forceRadius ;         //排斥力与引力的半径
        float friction ;            //抑制作用对排斥力所引起的粒子下降
        float springFactor ;        //记录有多少个粒子系统弹回到原始位置
        int cursorMode ;            //光标模型在像素群里的大小
    
        //声音的载入与触发位置
        ofSoundPlayer mySound;          //声音载入
        ofPoint mousePos, pastMousePos; //鼠标位置的移动与停留
		
};
