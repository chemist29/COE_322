#include <iostream> //header file
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

// In Class Challenge 1 (Right Triangle)
// I am Akksay, uteid = as68397
double PI = 3.14159265;

float Hypot (float a, float b);
float ang_a (float a, float hypot);
float ang_b (float ang_a);

struct multi_triangle {
        float s3;
        float s1d;
        float s2d;
        float t3;
        float t1d;
        float t2d;
};

int main(){
	float a,b,c,d;
	multi_triangle x; 
	cout << "Enter tirange 1 side a value" << endl;
	cin >> a;
	cout << "Enter triangle 1 side b value" << endl;
	cin >> b;
	cout << "Enter triangle 2 side a value" << endl;
	cin >> c;
	cout << "Enter triangle 2 side b value" << endl;
	cin >> d;
	x.s3 = Hypot(a,b);
	x.s1d = ang_a(a,x.s3);
	x.s2d = ang_b(x.s1d);
	x.t3 = Hypot(c,d);
	x.t1d = ang_a(c,x.t3);
	x.t2d = ang_b(x.t1d);
	cout << x.s3<<"  hypotenuse of first triangle" <<endl;
	cout<<x.s1d<<" first angle of first triangle"<<endl;
	cout<<x.s2d<<" second angle of first triangle"<<endl;
	cout << x.t3<<"  hypotenuse of second triangle" <<endl;
	cout<<x.t1d<<" first angle of second triangle"<<endl;
	cout<<x.t2d<<" second angle of second triangle"<<endl;
	return 0;
}
	


float ang_a (float a, float hypot)
{
        float theta_a;
        theta_a = asin(a/hypot)*180/PI;
        return theta_a;
}

float Hypot(float a, float b)
{
        float hypot;
        hypot = sqrt(a*a +b*b);
        return hypot;
}
float ang_b (float ang_a)
{
        float angle_b;
        angle_b = 90.0 - ang_a;
        return angle_b;
}

