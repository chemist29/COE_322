#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
 vector<int> flex(3,2);
 for (int i=0; i<3; i++)
 {
  flex.push_back(i);
 }
 cout<<flex.size()<<endl;
 return 0;
}


