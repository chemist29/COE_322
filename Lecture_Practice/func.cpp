#include <iostream> //header file
using std::cin;
using std::cout;
using std::endl;

bool the_function(int &i, int &j){
cout << "i in function before set i= " << i << endl;
i = 5;
j = j*3;
cout << "i in function after set i= " << i << endl;
return true;
}

int main(){
	int var =0;
	cout << "var before function call= " << var << endl;
	bool worked = the_function(var,7);
	cout << "Did it work? " << std::boolalpha << worked << endl;
	cout << "var after function call= " << var << endl;
}
