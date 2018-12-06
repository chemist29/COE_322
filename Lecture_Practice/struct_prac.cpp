#include<iostream>
#include<cmath>
using namespace::std;

struct coord
{
	int x;
	int y;
};
int print_coord(coord &mypoint)
{
	cout <<mypoint.x << ", "<<mypoint.y<<endl;
	return 0;
}

int main()
{
//coord p1 = (2,3);

	coord p1,p2;
	p1.y =4;
	p1.x =3;
	cout << p1.x <<","<<p1.y<<endl;
	p2.y=2;
	p2.x=2;
	float dist = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
	cout << dist <<endl;
}
	
