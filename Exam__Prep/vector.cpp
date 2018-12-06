#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
 vector<int> x(3,2),y(6);
 int xarray[6]={1,2,3,4,5,6};
 int yarray[6];
 *(yarray)=*(xarray);
 cout <<&x<<"&x"<<endl;
 for (int i=0; i<5;i++)
 {
  x.push_back(i);
  cout <<x.size()<<"x size"<<endl;  
 }
 return 0;
}


