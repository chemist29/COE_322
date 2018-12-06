#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
 float pi=3.1415;
 float a,b,Aa,Bb,H;
 cout << "enter a"<<endl;
 cin >> a;
 cout <<"enter b"<<endl;
 cin >>b;
 H = sqrt(a*a+b*b);
 cout << "hypotenuse = " << H<<endl;
 cout <<"Angle a = " << asin(a/H)*180/pi<<endl;
 cout <<"Angle b = " <<asin(b/H)*180/pi<<endl;
 return 0;
}
