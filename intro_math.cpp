#include <iostream> //header file
#include <cmath> //Math Functions
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
	cout << "1 + 2 =" << 1+2 << endl;
	cout << "1 - 2 =" << 1-2 << endl;
	cout << "1 * 2 =" << 1*2 << endl;
	cout << "1 / 2 =" << 1/2 << endl;
	cout << "1. / 2 =" << 1./2 << endl;
	cout << "1 % 2 =" << 1%2 << endl;
	cout << "48 / 7 =" << 48/7 << "Floor rounding"<< endl;
	cout << "4 to the power of 3 = " << pow(4,3) << endl;
	cout << "The square root of 9 = " << sqrt(9) << endl;
	string insert_name = "";
	cout << "Who dares disturb my slumber" << endl;
	cin >> insert_name;
	cout << "Oh, Hello " << insert_name << "!" << endl;
	return 0;
	}
	 
