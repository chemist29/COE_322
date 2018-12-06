#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main()
{
	vector<int> myVector={4, 7, 3, 2, 1};
	vector<int> myVector2(3, 5);
	vector<int> myVector3(5);
	vector<int> myvec4;
	
	cout <<"my vec4"<<myvec4.size()<<endl;
	myvec4.push_back(10);
	cout <<"my vec4"<<myvec4.size()<<endl;


	
	vector<float> R(20,5);
	vector<vector<float>> N (10, R);

	cout << "N contains:" << endl;

	for (auto Row : N)
	{
		for ( auto z : Row)
		{
		   cout << z << " ";
		}
		cout << endl;
	}
	cout << endl;
	
    cout << "myVector contains:" << endl;

	for (auto &i: myVector)
	{
		cout << i << endl;
		i = i*5;
	}


	cout << "myVector contains:" << endl;
	cout<< "myVector [4]"<< myVector[4]<<endl;
	cout<< "myVector [5]// fake"<< myVector[5]<<endl;
	cout<<"myvetor.at(5)"<< myVector.at[5]<<endl;
	for (auto i: myVector)
	{
		cout << i << endl;
	}
}
