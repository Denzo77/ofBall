#include "ofBall.h"

ofBall::ofBall(float _x, float _y, int _dim)
{
    // random start pos
    x = _x;
    y = _y;

    //random speed and direction
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);

    dim = _dim;
}

void ofBall::update(){

    //bounces off walls
    if(x < 0){
        x = 0;
        speedX *= -1;
    } else if(x>ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }

    if(y<0){
        y = 0;
        speedY *= -1;
    }
    else if(y>ofGetHeight()){
        y = ofGetHeight();
        speedY*=-1;
    }

    //increment pos according to speed
    x+=speedX;
    y+=speedY;

}

void ofBall::draw(){
    //values for colour
    ofSetColor(120,120,120);

    //draw circle
    ofCircle(x,y,dim);

}
