#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using std::cout;
using std::endl;
using std::string;
//Name = Akksay, eid =as68397
class Point{
public:
 float xcoordinate,ycoordinate;
 double distance_to_origin() { return sqrt(xcoordinate*xcoordinate+ycoordinate*ycoordinate);};
 double distance(Point P,Point Q) {return sqrt(pow(P.xcoordinate-Q.xcoordinate,2)+pow(P.ycoordinate-Q.ycoordinate,2));};
 void printout() {cout<< "Point = "<< xcoordinate<<","<<ycoordinate<<endl;};
};

class Line{
public:
 Point p1,p2;
 void printout(Point p1, Point p2) {cout<< "Line is between: "<< p1.xcoordinate<<","<<p1.ycoordinate<<" and " << p2.xcoordinate<<','<< p2.ycoordinate<<endl;};
 Point midpoint(Point p1, Point p2) {Point midpoint; midpoint.xcoordinate=(p1.xcoordinate/2 +p2.xcoordinate/2);
 midpoint.ycoordinate = (p1.ycoordinate/2 +p2.ycoordinate/2);return midpoint;};
};



int main()
{
 Point a,b;
 Line l;
 a.xcoordinate = 1.;
 a.ycoordinate = 2.;
 b.xcoordinate =1.5;
 b.ycoordinate =2.5;
 cout <<"sum components p1= "<<a.xcoordinate+b.ycoordinate<<endl;
 cout <<" components p1= "<<a.xcoordinate<< ","<<a.ycoordinate<<endl;
 cout << "dist from origin = "<<a.distance_to_origin()<<endl;
 cout <<"distance = "<<a.distance(a,b)<<endl;
 b.printout();
 l.printout(a,b);
 Point m= l.midpoint(a,b);
 m.printout(); 
 return 0;
}
