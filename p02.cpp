#include <iostream>
#include "p02.h"

using namespace std;

// default constructor
MyPair::MyPair() {

}

// construct point when given x and y value
MyPair::MyPair(float x, float y) : x(x), y(y)
{

}

    // get x value function
    float MyPair::getx() const{
    return x;
    }

    // get y value function
    float MyPair::gety() const{
    return y;
    }

// Used to override the addition operator and add points
MyPair operator+(MyPair const &MyPair1, MyPair const &MyPair2)
{
    float x1 = MyPair1.getx();
    float x2 = MyPair2.getx();
    float y1 = MyPair1.gety();
    float y2 = MyPair2.gety();

    float x3 = x1 + x2;
    float y3 = y1 + y2;

	return MyPair(x3,y3);
}