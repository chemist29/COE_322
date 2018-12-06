#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

void triangle(double &a,double &b)
{
 double H = sqrt(a*a+b*b);
 double A = asin(a/H)*180/3.1415;
 double B = 90-A;
 cout<<"H = "<<H<<endl;
 cout<<"Angle a"<<A<<endl;
 cout <<"Angle b"<<B<<endl;
}

int main() 
{
 double a,b;
 cout <<"side a"<<endl;
 cin >> a;
 cout << "side b"<<endl;
 cin >>b;
 triangle(a,b);
 return 0;
} 
