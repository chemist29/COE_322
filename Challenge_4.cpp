#include <iostream> //header file
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

// In Class Challenge 1 (Right Triangle)
// I am Akksay, uteid = as68397
double PI = 3.14159265;

void Hypot_Ang (double &a, double &b, double &Hypot,double &angle_a,double &angle_b);

int main(){
	double a; double angle_a =0;
	double b; double angle_b =0;
	double hypot =0;
	cout << "Enter side a value" << endl;
	cin >> a;
	cout << "Enter side b value" << endl;
	cin >> b;
	Hypot_Ang(a,b,hypot,angle_a,angle_b);
	cout << "Hypotenuse = " << hypot << endl;
	cout << "Angle a = "<< angle_a << " degrees"<< endl;
	cout << "Angle b = "<< angle_b << " degrees"<< endl;
	return 0;
}
	


void Hypot_Ang(double &a, double &b, double &Hypot,double &angle_a,double &angle_b)
{
	Hypot = sqrt(a*a +b*b);
	angle_a = asin(a/Hypot)*180/PI;
	angle_b = 90 - angle_a;
}
