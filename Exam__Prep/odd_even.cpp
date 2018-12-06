#include<iostream>
#include<time.h>
using std::cin;
using std::cout;
using std::endl;

int main()
{
 int num_array[5];
 for (int i =0; i<5;i++)
 {
  num_array[i]=(10.*rand()/RAND_MAX);
  if (num_array[i]%2 == 0)
  {
   cout << "even "<<num_array[i]<<endl;
  }
  else 
  {
   cout << "odd"<<num_array[i]<<endl;
  }
 }
 return 0;
}

   
