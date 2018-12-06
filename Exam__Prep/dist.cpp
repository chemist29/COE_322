#include<iostream>
#include <cmath>
using std::cout;
using std::endl;

struct Coord
{
 float x,y;
 //float y;
};

float distance(Coord a, Coord b)
{
 float dx,dy;
 dx = (a.x-b.x);
 dy = (a.y-b.y);
 return sqrt(dx*dx+dy*dy);
}
int main()
{
 Coord p,r;
 p.x=3, 
 p.y=0;
 r.x=0;
 r.y=4;
 cout <<distance(p,r)<<endl;
 cout <<p.x<<"p.x"<<endl;
 return 0;
}
