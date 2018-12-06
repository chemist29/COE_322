#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

float H(float x,float y)
{
 float h;
 h = sqrt(x*x+y*y);
 return h;
}

float Aa(float H,float x)
{
 float A;
 A=asin(x/H)*180/3.1415;
 return A;
}
float Bb(float a)
{
 return 90-a;
}

int main()
{
 float a,b;
 cout<<"side a = "<<endl;
 cin >>a;
 cout << "side b = "<<endl;
 cin >>b;
 cout << "Hypotenuse = "<< H(a,b)<<endl;
 cout << "angle a = "<<Aa(H(a,b),a)<<endl;
 cout << "angle b = "<<Bb(Aa(H(a,b),a))<<endl;
 return 0;
}

