#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

class Point{
	private:
		double px, py;

	public:
		Point() // default constructor
		{
			px = 1;
			py = 1;
		}
		Point(int x, int y) //secondary constructor
		{
			px = x;
			py = y;
		}

		double getx() // return the value of px
		{
			return px;
		}

		double gety() // return the value of py
		{
			return py;
		}
		void setx(double new_x) //set the value of px
		{
			px = new_x;
		}
		void sety(double new_y) //set the value of py
		{
			py = new_y;
		}
		void setxy(double new_x, double new_y)
		{
			px = new_x;
			py = new_y;
		}

		void printPoints()
		{
			cout << "Point: " << px << ", " << py << endl;
		}
};
class Line {
	private:
		  double px1,py1, px2, py2;
	public:
		  Line() {
				     px1 = 0; py1 = 0; px2 = 1; py2 = 1;
		  }
	      Line( double x1,double y1, double x2, double y2 ) {
				      px1 = x1; py1 = y1; px2 = x2; py2 = y2;
	      }
		  Line (Point p1, Point p2)
		  {
			  //todo
			  px1 = p1.getx();

		  }
		  double length() { return sqrt((px1-px2)*(px1-px2) + (py1-py2)*(py1-py2));} 
		  
		  Line scale(double factor) 
		  {
			  return Line(px1*factor, py1*factor, px2*factor, py2*factor);
		  }

		  Point midpoint()
		  {
			  //todo
			  // midpoint_x = //some calculation involving x1 and x1
		      // 
			  Point mp = Point(midpoint_x, midpoint_y);
			  return mp;

		  }


};

int main()
{
	Point p1 = Point();
	Point p2 = Point(2,5);

	p1.printPoints();
	p2.printPoints();
	
	p2.setx(3.4);
	p2.sety(4.5);

    cout << "Point 2 has been changed" << endl;	
	p2.printPoints();

	Line line1 = Line(0, 0, 5, 5);
	cout << "Length of Line1:" << line1.length() << endl;

	Line line2 = line1.scale(2);
	cout << "Length of Line2:" << line2.length() << endl;
}



