#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
 int x = 4;
 vector<int> a(10,0);
 int size = a.size();
 while (size !=0){
  a.pop_back(a[size-1]);
  size -=1;
 }
 cout <<a.size()<<"a.size after loop"<<endl;
 return 0;
}


