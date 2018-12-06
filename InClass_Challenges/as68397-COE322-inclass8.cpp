#include<iostream>
#include<vector>
#include<string>
#include<random>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int  main()
{
 float r = 1.*rand()/RAND_MAX;
 //gives rand num b/t 0 and 1
 vector<int> chal;
 for (int i=1; i>0;i++)
 {
  int r = 100.*rand()/RAND_MAX;
  if (r ==42.)
  {
   chal.push_back(r);
   cout << chal.size()<<endl;
   break;
  }
  chal.push_back(r); 
 }
 return 0;
}

