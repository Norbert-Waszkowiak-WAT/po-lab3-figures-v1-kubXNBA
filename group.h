#ifndef GROUP
#define GROUP
 


#include "line.h"
#include "triangle.h"
#include "quadrilateral.h"
#include <vector>
#include <iostream>
using namespace std;
 
class Group{
    private:
        vector<Line>lines; 
        vector<Triangle>triangles; 
        vector<Quadrilateral>quadrilaterals; 
    public:
    Group();
    Group(Group &other);
    bool equals(Group &other);
    void remove(Line t);
    void remove(Triangle t);
    void remove (Quadrilateral t);
    void add(Line t);
    void add(Triangle t);
    void add(Quadrilateral t);
    double getSurface();
    void flip();
    void move(double x, double y);
    string toString();
};
#endif
 