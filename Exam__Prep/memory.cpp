#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
 int var = 123;
 cout <<var<<endl;
 cout <<&var<<endl;
 cout << sizeof(&var)<<"sizeof(&var)"<<endl;
 cout <<sizeof(var)<<"sizeof(var)"<<endl;
 int &Newvar = var;
 Newvar = 6;
 cout << var <<"After uing newvar"<<endl;
 cout << Newvar<<" I am guess it is the same address"<<endl;
 return 0;
}
