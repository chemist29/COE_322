#include<iostream>
#include<cmath>
using std::cout;
using std::endl;



class Rectangle {
public:
 double l,h;
 bool q;
 Rectangle(){
 }
 Rectangle(double c,double d){ l=c;h=d;};
 void setl (double a) { l=a;};
 void seth (double b) { h=b;};
 double area() {return l*h;};
 double perimeter() {return 2*(l+h);};
};


class Square:public Rectangle {
 public:
  Square(){}
  Square(double a):Rectangle(a,a){};
};

int main()
{
 Rectangle r(4,3);
 cout << "Area and Perimeter of Rectangle = "<<r.area()<<","<<r.perimeter()<<endl;
 Square s(3);
 cout << "Area and Perimeter of Square = "<<s.area()<<","<<s.perimeter()<<endl;
 return 0;
}
