#include <iostream>
#include <iomanip>
#include <stdio.h> 
#include <stdlib.h> 
#include "p02.h"

using namespace std;

int main(){

    // call class functions
    MyPair a(3,4);
    MyPair b(5,6);
    MyPair c;

    // add points together
    c = a + b;

    // get x and y values from the added points
    float c_x = c.getx();
    float c_y = c.gety();

    // print out statement with values from c
    fprintf(stdout, "the sum of this pair is: %f, %f\n", c_x, c_y);

}