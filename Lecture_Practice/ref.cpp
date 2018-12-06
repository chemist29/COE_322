#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int f(int i)
{
	cout << "Hello World" <<endl;
	return 1;
}
int main(){
	int a =5;
	int &ref = a;
	cout << a <<endl;
	ref =12;
	cout << a <<endl;
	f(2);
	cout << "the next line after func call "<<endl;
	f(2);
	cout << "2nd line"<<endl;
}


