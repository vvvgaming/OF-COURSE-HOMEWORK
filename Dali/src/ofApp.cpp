#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //背景和图片设置
    ofBackground( 0 , 0 , 0 ) ;
    image.loadImage ( "Elizabeth May.png" ) ;
    
    
    // 声音设置
    mySound.loadSound("Kraftwerk - The Robots-2.mp3");
    mySound.play();
    
    
    //程序运行快慢设置
    sampling = 2 ;
    
    //检索来自加载图像的像素
    unsigned char * pixels = image.getPixels() ;
    int w = image.width ;
    int h = image.height ;
    
    //偏移中心的粒子子画面
    int xOffset = (ofGetWidth() - w ) /2 ;
    int yOffset = (ofGetHeight() - h ) /2 ;
    
    //通过每一行像素的循环
    for ( int x = 0 ; x < w ; x+=sampling )
    {
        //通过每一列像素的循环
        for ( int y = 0 ; y < h ; y+=sampling )
        {
            //像素颜色设置
            int index = ( y * w + x ) * 3 ;
            ofColor color ;
            color.r = pixels[index] ;
            color.g = pixels[index+1] ;
            color.b = pixels[index+2] ;
            particles.push_back( particle ( ofPoint ( x + xOffset , y + yOffset ) , color ) ) ;
        }
    }
    
    //像素弹起和下落的速度
    ofSetFrameRate( 40 ) ;
    numParticles = ( image.width * image.height ) / sampling ;
    
    
    //弹起和下落相关值的设置
    cursorMode = 0 ;
    forceRadius = 64 ;
    friction = 0.89 ;
    springFactor = 0.19 ;
    springEnabled = true ;
    
    
    //声音从最开始暂停
    mySound.play();
    mySound.setPaused(true);


}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofPoint diff ;          //判断粒子与鼠标的不同
    float dist ;            //粒子与鼠标的距离
    float ratio ;           //效果比值－－公式：Ratio = 1 + (-dist/maxDistance) ;
    const ofPoint mousePosition = ofPoint( mouseX , mouseY ) ; //分配和检索鼠标坐标值
    
    
     //通过vector创建一个迭代周期
    std::vector<particle>::iterator p ;
    for ( p = particles.begin() ; p != particles.end() ; p++ )
    {
        ratio = 1.0f ;
        p->velocity *= friction ;
        
        //重新加速每一帧
        p->acceleration = ofPoint() ;
        diff = mousePosition - p->position ;
        dist = ofDist( 0 , 0 , diff.x , diff.y ) ;
        
        //判断是否在互动区域内
        if ( dist < forceRadius )
        {
            ratio = -1 + dist / forceRadius ;
            
            //排斥力引发条件
            if ( cursorMode == 0 )
                p->acceleration -= ( diff * ratio) ;
            
            //吸引力引发条件
            else
                p->acceleration += ( diff * ratio ) ;
        }
        
        if ( springEnabled )
        {
            //像素复位
            p->acceleration.x += springFactor * (p->spawnPoint.x - p->position.x);
            p->acceleration.y += springFactor * (p->spawnPoint.y - p->position.y) ;
        }
        
        p->velocity += p->acceleration * ratio ;
        p->position += p->velocity ;
    }
    
    
    
    
    //声音和鼠标移动的引发条件设置
    if(mousePos.distance(pastMousePos) > 0){
    
        mySound.setPaused(false);
    }
    else{
        mySound.setPaused(true);
    }
    
    //cout<<mousePos.distance(pastMousePos)<<endl;鼠标距离变化的判断函数

    pastMousePos.set(mouseX, mouseY);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //基于OpenGL的图形粒子绘制
    glBegin(GL_POINTS);
    
     //通过vector创建一个迭代周期
    std::vector<particle>::iterator p ;
    for ( p = particles.begin() ; p != particles.end() ; p++ )
    {
        glColor3ub((unsigned char)p->color.r,(unsigned char)p->color.g,(unsigned char)p->color.b);
        glVertex3f(p->position.x, p->position.y , 0 );
    }
    
    glEnd();
    
    
    
    ofSetColor ( 255 , 255 , 255 ) ;
    
    string output = "Z :: Springs on/off : " + ofToString(springEnabled) +
    
    "\n J :: CursorMode repel/attract " + ofToString( cursorMode ) +
    
    "\n # of particles : " + ofToString( numParticles ) +
    
    " \n fps:" +ofToString( ofGetFrameRate() ) ;
    
    ofDrawBitmapString(output ,20,666);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch ( key )
    {
        case 'z':
        case 'Z':
            cursorMode = ( cursorMode + 1 > 1 ) ? 0 : 1 ;
            break ;
            
            
        case 'j':
        case 'J':
            springEnabled = !springEnabled ;
            break ;
            
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    //鼠标位置设置
    mousePos.set(x,y);
    
    //鼠标的左右移动控制声道\上下移动控制音量
//    float vol = ofMap(mouseY, ofGetHeight(), 0, 0, 1);
//    mySound.setVolume(vol);
//    
//    float pan = ofMap(mouseX, 0, ofGetWidth(), -1, 1);
//    mySound.setPan(pan);

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
   
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
  

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
