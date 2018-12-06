#include<iostream>
#include<random>



using std::cout;
using std::endl;

class Point{
	private:
		double px, py;
	public:
		Point()
		{
			cout << "Default Constructor used" << endl;
			px = 1; py = 1;
		}
		Point(double x, double y)
		{
			cout << "Secondary Constructor used" << endl;
			px = x; py = y;
		}

		double getx()
		{
			return px;
		}

		double gety()
		{
			return py;
		}

		void setx(double x)
		{
			px = x;
		}

		void sety(double y)
		{
			py = y;
		}


		void printPoint()
		{
			cout << px << ", " << py << endl;
		}

		double distance(Point point2)
		{
			return sqrt(pow(px-point2.getx(),2) + pow(py-point2.gety(),2));
		}

		double distance(double x, double y)
		{
			return sqrt(pow(px-x, 2) + pow(py-y, 2));
		}

		double distance(Point p, bool t)
		{
			return 7;
		}

		Point factorPoint(double f)
		{
			Point p3(px*f, py*f);
			return p3;
		}



};

double distanceBetweenPoints(Point point1, Point point2)
{
	return sqrt(pow(point1.getx()-point2.getx(),2) + pow(point1.gety()-point2.gety(),2));
}



int main()
{
	Point p1;
	p1.printPoint();

	Point p2(3.5, 7.8);
	p2.printPoint();

	//old way, calling a function, passing both points
	cout << "distance between p1 and p2:" << distanceBetweenPoints(p1, p2) << endl;

	//new way, calling a method inside the class
	cout << p1.distance(p2) << endl;
	cout << p1.distance(1.3, 2.7) << endl;

	Point newPoint = p1.factorPoint(2);
	newPoint.printPoint();


}
