#include<iostream>
#include<vector>
#include<string>
#include<random>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> combiner(vector<int> a,vector<int> b)
{
	vector<int> comb;
	for (auto i : a)
	{
	 comb.push_back(i);
	}
	for (auto j : b)
	{
	 comb.push_back(j);
	}
	return comb;
}

int  main()
{
 //float r = 1.*rand()/RAND_MAX;
 //gives rand num b/t 0 and 1
 vector<int> chal;
 vector<int> chal2;
 for (int i=1; i<6;i++)
 {
  int r = 100.*rand()/RAND_MAX;
  int j = r - 1;
  chal.push_back(r); 
  chal2.push_back(j); 
 }
 combiner(chal,chal2);
 for (auto i:combiner){
	cout <<combiner(i)<<endl;
 }
 return 0;
}

