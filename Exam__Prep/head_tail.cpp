#include<iostream>
using std::cout;
using std::endl;

int main()
{
 int tail=0;
 int head=0;
 for (int i =0; i<10;i++)
 {
  int j = rand();
  if (j%2 ==0)
  {
   tail +=1;
  }
  else{
   head +=1;
  }
 } 
 cout << "Total num tails = " <<tail<<endl;
 cout << "Total num heads = " <<head<<endl;
 return 0;
}
