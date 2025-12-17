#include "line.h"
#include "point.h"
#include <iostream>
#include <sstream>
 
using namespace std;
 
    Line::Line(Point a,Point b) :a(a),b(b){}
    Line::Line(const Line &other) :a(other.a),b(other.b){}
   
    void Line::flip(){
        a.flip();
        b.flip();
    }
    void Line::move(double x,double y){
        a.move(x,y);
        b.move(x,y);
    }
    std::string Line::toString(){
        std::ostringstream oss;
        oss<<"Line("<<a.toString()<<", "<<b.toString()<<")";
        return oss.str();
    }
     bool Line::equals(Line &other){
        return a.equals(other.a)&&b.equals(other.b);
    }