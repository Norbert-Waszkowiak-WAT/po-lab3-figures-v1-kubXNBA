#include <cmath>
#include "group.h"
#include <vector>



Group::Group(){}
Group::Group(Group &other):lines(other.lines),triangles(other.triangles),quadrilaterals(other.quadrilaterals){};
bool Group::equals(Group &other){
for(size_t i=0;i< lines.size(); ++i){
    if(!lines[i].equals(other.lines[i])){
        return false;
    }
}
for(size_t i=0;i< triangles.size(); ++i){
    if(!triangles[i].equals(other.triangles[i])){
        return false;
    }
}
for(size_t i=0;i< quadrilaterals.size(); ++i){
    if(!quadrilaterals[i].equals(other.quadrilaterals[i])){
        return false;
    }
}
return true;
}

void Group::remove(Line t){
for(auto it=lines.begin();it!=lines.end();++it){
    if(it->equals(t)){lines.erase(it);return;}
}}
void Group::remove(Triangle t){
    for(auto it=triangles.begin();it!=triangles.end();++it){
    if(it->equals(t)){triangles.erase(it);return;}
}}

void Group::remove (Quadrilateral t){
    for(auto it=quadrilaterals.begin();it!=quadrilaterals.end();++it){
    if(it->equals(t)){quadrilaterals.erase(it);return;}
}}
void Group::add(Line t){
    lines.push_back(t);
}
void Group::add(Triangle t){
    triangles.push_back(t);
}

void Group::add(Quadrilateral t){
quadrilaterals.push_back(t);
}

double Group::getSurface(){
double sum=0;
    for(auto &t : triangles){
        sum+=t.getSurface();
    }
    for(auto &q : quadrilaterals){
       sum+= q.getSurface();
    }
    return sum;
}

void Group::flip(){
    for(auto &l : lines){
        l.flip();
    }
    for(auto &t : triangles){
        t.flip();
    }
    for(auto &q : quadrilaterals){
        q.flip();
    }
}
void Group::move(double x, double y){
  for(auto &l : lines){
        l.move(x,y);
    }
    for(auto &t : triangles){
        t.move(x,y);
    }
    for(auto &q : quadrilaterals){
        q.move(x,y);
    }
}
string Group::toString()
{
string sum="Group(";
 for(auto &t : lines){
        sum+=t.toString()+", ";
    }
    for(auto &t : triangles){
        sum+=t.toString()+", ";
    }
    for(auto &q : quadrilaterals){
       sum+= q.toString()+", ";
    }
    return sum+")";
}
