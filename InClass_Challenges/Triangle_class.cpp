#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;



class Triangle{
 public:
 double a,b;
 double H() {return sqrt(a*a+b*b);};
 double ang_a() { return asin(a/H())*180/3.1415;};
 double ang_b() { return 90.0-ang_a();};
 double ang_c() {return 90.0;};
};

int main(){
 Triangle t,s;
 cout<<"What is the first side of the first triangle?"<<endl;
 cin>>t.a;
 cout<<"What is the second side of the first triangle?"<<endl;
 cin>>t.b;
 cout <<"Hypotenuse of First Triangle =  "<<t.H()<<endl;
 cout <<"Angle A of First Triangle = "<<t.ang_a()<<endl;
 cout <<"Angle B of First Triangle = "<<t.ang_b()<<endl;
 cout <<"Angle C of First Triangle = "<<t.ang_c()<<endl;
 cout<<"What is the first side of the second triangle?"<<endl;
 cin>>s.a;
 cout<<"What is the second side of the second triangle?"<<endl;
 cin>>s.b;
 cout <<"Hypotenuse of Second Triangle =  "<<s.H()<<endl;
 cout <<"Angle A of Second Triangle = "<<s.ang_a()<<endl;
 cout <<"Angle B of Second Triangle = "<<s.ang_b()<<endl;
 cout <<"Angle C of Second Triangle = "<<s.ang_c()<<endl;

 return 0;
}

