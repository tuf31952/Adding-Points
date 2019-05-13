 #include <iostream>
 #include <iomanip>
 #include <stdio.h> 
 #include <stdlib.h> 

using namespace std;

class MyPair
{
    private:
        float x;
        float y;

    public:

    // default constructor
    MyPair();

    // declare consturc poitns function
    MyPair(const float x,const float y);    

    // declare getx function
    float getx() const;

    //declare gety function
    float gety() const;

    // Overload Addition Operator
    friend MyPair operator+(MyPair const &, MyPair const &);

};