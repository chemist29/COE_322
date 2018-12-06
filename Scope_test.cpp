#include <iostream> //header file
#include <cmath> //Math Functions
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	float i = 1.5; //i is a local variable to the main function
	for (int i = 0; i < 5; i++) { //i is a local variable to the for loop
	cout << “The index i = “ << i << endl;
	}
	cout << "The variable i in main is = " << i << endl;
	return 0;
}

