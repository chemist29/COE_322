#include <iostream> //header file
using std::cin;
using std::cout;
using std::endl;


struct myStruct{
	int number;
	int* numPointer;
};



int main(){
	int n =500;
	int* ipointer;
	ipointer=&n;
	//cout <<"Same as 
	cout << "value of n"<<n<<endl;
	cout << "adress of n"<<&n<<endl;
	//cout << "value of n"<<n<<endl;
	cout<<endl;
	cout << "memory adress of where the pointer is pointing to "<<ipointer<<endl;
	cout << "value of what the pointer in pointing to " <<*ipointer<<endl;
	cout << " memory adress of ipointer" << &ipointer<<endl;
	myStruct customStruct;
	customStruct.number=600;
	customStruct.numPointer =&n;
	
	myStruct* pointerToStructure;
	pointerToStructure = &customStruct;
	cout << " Value of pointerTostructure's number "<< (*pointerToStructure).number<<endl;
	cout << "Another way  pointerTostructure's number, "<< pointerToStructure->number <<endl;
	}
