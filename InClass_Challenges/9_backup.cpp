#include<iostream>
#include<vector>
#include<random>
using std::cout;
using std::cin;
using std::endl;
using std::vector;



vector<int> random_vector(int length)
{
 vector<int> r(length);//declares a vector of integers of size length
 for (int i = 0;i<length;i++)
 {
  r[i] = 100.*rand()/RAND_MAX;
 }
 return r;
}


int main()
{
 int length =10; 
 vector<int> v=random_vector(length);
 for (int i =0; i<10; i++){
  cout<<  v[i]<<" ";
 }
 return 0;
}




























