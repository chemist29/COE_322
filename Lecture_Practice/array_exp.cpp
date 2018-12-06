#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
int main()
{
 int j;
 //cout << "enter size of array"<<endl;
 //cin >> j;
 int array_1[10] = {1,2,3,4,5,6,7,8,9,10};
 for (int i=0; i<10; i++)
 {
  //cin >> array_1[i];
  cout << "element " << i <<" is = " << array_1[i]<<endl;
 }
 cout << array_1 << "= cout array_1 "<<endl;
 cout << *(array_1 +1) << "= cout array_1 +1 "<<endl;
 cout << 10*sizeof(int)<<" 10 int size"<<endl;
 int myvar = 10;
 cout << myvar << endl;
 cout << &myvar << endl;
 int* mypointer = &myvar;
 cout << mypointer << "mypointer "<< endl;
 cout << &mypointer << " adress, &mypointer"<< endl;
 cout << "What is mypointer is pointing to = " << *mypointer << endl;
 myvar = 6749;
 cout << myvar <<endl;
 cout << &myvar<<endl;
 cout << *mypointer<<endl;
 int* x;
 x = (int*)malloc(10*sizeof(int));
 cout << x <<endl;
}
