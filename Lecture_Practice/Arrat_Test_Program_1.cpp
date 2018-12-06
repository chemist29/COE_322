#include <iostream> //header file
using std::cin;
using std::cout;
using std::endl;

int main(){
	int array_5_elements [5] = { 10,11,12,13,14};
	cout << "First Element = " << array_5_elements [0] <<endl;
	cout << "Second Element = " << array_5_elements [1] <<endl;
	cout << "Third Element = " << array_5_elements [2] <<endl;
	cout << "Fourth Element = " << array_5_elements [3] <<endl;
	cout << "Fifth Element = " << array_5_elements [4] <<endl;
	cout << "101th = " << array_5_elements [100] <<endl;
	cout << sizeof(array_5_elements) << " size of our array" << endl;
	return 0;
	}
