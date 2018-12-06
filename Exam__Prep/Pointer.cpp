#include<iostream>
#include<cmath>
#include<string>
using std::cin;
using std::cout;
using std::endl;





int main()
{
 int a=5;
 int x[5] ={1,4,9,16,25};
 int* apointer = &a;
 int* xpointer =x;
 //cout <<*apointer<<"*apointer"<<endl;//=5
 //cout <<&a<<" &a = apointer"<<endl;
 cout<<*(x+1)<<" *(x)"<<endl;
 cout<<x[0]<<" x[0]"<<endl;
 cout << &x <<"= x "<<"xpointer = "<<xpointer<<endl; //AGREE
 *(xpointer++)=100;// <<"*(xpointer++)"<<endl;
 cout <<x[0]<<" x[0]"<<endl;
 return 0;
}


