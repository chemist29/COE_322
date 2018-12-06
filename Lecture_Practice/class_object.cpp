#include<iostream>
#include<random>
using std::cin;
using std::cout;
using std::endl;

class Point{
	private:
	 double px,py;
	public:
	 Point()	
	 {
	  cout << "default constructor"<<endl;
	  px =1; py=1;
	 }
	 Point(double x,double y)
	 {
	  cout << "secondary constructor"<<endl;
	  px =x; py =y;
	 }
	 double getx()
	 {
	  return px;
	 }
	 double gety()
	 {
	  return py;
	 }
};

int main(){
 Point p1;
 cout << p1.getx() << ", "<<p1.gety()<<endl;
 Point p2(3.5,7.8);
 return 0;
}

