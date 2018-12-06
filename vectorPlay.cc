#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> myVector(5, 2);
	vector<int> myVector1 = {1, 2, 3, 4, 5};

	cout << myVector[3] << endl;

	for (auto &e : myVector)
	{
		e = e + 20;
		cout << e << endl;
	}

	for (auto e : myVector)
	{
		cout << e << endl;
	}

	myVector1[4] = 1;
	myVector1.at(4) = 1;

	myVector1[5] = 0;
	cout << myVector1[5] << endl;
	//myVector1.at(5) = 0;


}

