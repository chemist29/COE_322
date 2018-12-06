#include <iostream>
using std::cout;
using std::endl;

struct roomtemp {
	float x=0;
	float y=0;
	float z=0;
	float temp=0;
	roomtemp* nexttemp ;
};


int main()
{
	int t =100;
	roomtemp* rt;

	for (int i  =0; i=t ; i++)
	{
	 rt = (roomtemp*)malloc(sizeof(roomtemp));
	 (*rt).x =100;	 
	 cout << rt <<endl;
	}
}
