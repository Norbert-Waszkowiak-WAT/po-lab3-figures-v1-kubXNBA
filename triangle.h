#ifndef TRIANGLE
#define TRIANGLE
 
#include "point.h"
#include <iostream>
using namespace std;
 
class Triangle{
    private:
        Point a;
        Point b;
        Point c;
    public:
    Triangle(Point a,Point b,Point c);
    Triangle(const Triangle &other);
    bool equals(Triangle &other);
    void flip();
    void move(double x,double y);
    double getSurface();
    std::string toString();
};
#endif
 