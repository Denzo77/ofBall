#ifndef OFBALL_H
#define OFBALL_H

#include "ofMain.h"

class ofBall
{
    public:
        //constructor
        ofBall(float _x, float _y, int _dim);

        //methods
        void update();
        void draw();

        //variables
        float x;
        float y;
        int dim;
        float speedX;
        float speedY;


    protected:
    private:
};

#endif // OFBALL_H
