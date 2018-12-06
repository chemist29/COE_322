#include <iostream> //header file
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

// In Class Challenge 1 (Right Triangle)
// I am Akksay, uteid = as68397
double PI = 3.14159265;
int main(){
	double a; double angle_a;
	double b; double angle_b;
	double c; double angle_c;
	cout << "Enter side a value" << endl;
	cin >> a;
	cout << "Enter side b value" << endl;
	cin >> b;
	c = sqrt(a*a + b*b);
	cout << "With a side a of " << a << " and a side b of " << b <<endl;
	cout << "The hypotenuse is = " << c <<endl;
	angle_a = asin(a/c)*180/PI;
	angle_b = asin(b/c)*180/PI;
	cout << "Angle a = " << angle_a <<" degrees" << endl; 
	cout << "Angle b = " << angle_b <<" degrees" <<endl; 
	cout << "Sum of angles a and b = " << angle_a + angle_b << " degrees" <<endl; 
	return 0;
	}
	


