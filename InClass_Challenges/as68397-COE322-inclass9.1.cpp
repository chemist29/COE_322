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
 Point (){};
 Point (float a,float b) {float xcoordinate= a,ycoordinate =b;};
 double distance_to_origin() { return sqrt(xcoordinate*xcoordinate+ycoordinate*ycoordinate);};
 double distance(Point P,Point Q) {return sqrt(pow(P.xcoordinate-Q.xcoordinate,2)+pow(P.ycoordinate-Q.ycoordinate,2));};
 void printout() {cout<< "Point = "<< xcoordinate<<","<<ycoordinate<<endl;};
};

int main()
{
 Point p1,p2;
 p1.xcoordinate = 1.;
 p1.ycoordinate = 2.;
 p2.xcoordinate =1.5;
 p2.ycoordinate =2.5;
 cout <<"sum components p1= "<<p1.xcoordinate+p1.ycoordinate<<endl;
 cout <<" components p1= "<<p1.xcoordinate<< ","<<p1.ycoordinate<<endl;
 cout << "dist from origin = "<<p1.distance_to_origin()<<endl;
 cout <<"distance = "<<p1.distance(p1,p2)<<endl;
 p2.printout();
 return 0;
}
