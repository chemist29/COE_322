#include <iostream> //header file
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

// In Class Challenge 1 (Right Triangle)
// I am Akksay, uteid = as68397
double PI = 3.14159265;
double Hypot (double a, double b);
double ang_a (double a, double hypot);
float ang_b (float ang_a);
int main(){
	double a; double angle_a;
	double b; double angle_b;
	cout << "Enter side a value" << endl;
	cin >> a;
	cout << "Enter side b value" << endl;
	cin >> b;
	cout << "Hypotenuse = " << Hypot(a,b) << endl;
	cout << "Angle a = "<< ang_a(a,Hypot(a,b)) << " degrees"<< endl;
	cout << "Angle b = "<< ang_b(ang_a(a,Hypot(a,b)))<< " degrees"<< endl;
	return 0;
	}
	


double ang_a (double a, double hypot)
{
	float theta_a;
	theta_a = asin(a/hypot)*180/PI;
	return theta_a;
} 

double Hypot(double a, double b)
{
	double hypot;
	hypot = sqrt(a*a +b*b);
	return hypot;
}
float ang_b (float ang_a)
{
	float angle_b;
	angle_b = 90.0 - ang_a;
	return angle_b;
}
