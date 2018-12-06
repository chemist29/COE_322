#include<iostream>
using std::cout;
using std::endl;


int main()
{
 double A =100;
 double B =200;
 double T =0;
 while (A <=B){
  A *=1.05;
  B *= 1.02;
  T += 1;
 }
 cout << A <<','<<B<<','<<T<<endl;
 return 0;
}

