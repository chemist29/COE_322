#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

struct triangle
{
 float a,b;
};

void tri(triangle t)
{
 float H,A,B;
 H = sqrt(t.a*t.a+t.b*t.b);
 A = asin(t.a/H)*180/3.1415;
 B = asin(t.b/H)*180/3.1415;
 cout <<"H = "<<H<<endl;
 cout <<"A = "<<A<<endl;
 cout <<"B = "<<B<<endl;
} 

int main()
{
 triangle T;
 cout << "a"<<endl;
 cin >> T.a;
 cout<<'b'<<endl;
 cin >>T.b;
 tri(T);
 return 0;
}
 
 
