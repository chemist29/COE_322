#include<iostream>
#include<vector>
#include<random>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Name = Akksay, eid = as68397

vector<int> random_vector(int length)
{
 vector<int> r(length);//declares a vector of integers of size length
 for (int i = 0;i<length;i++)
 {
  r[i] = 100.*rand()/RAND_MAX;
 }
 return r;
}

vector<int> sort(vector<int> A)
{
 vector<int> r =A;
 int l = r.size();
 int global_max=r[0];
 for (int k =0; k<l;k++){
  if (global_max<=r[k]){
   global_max=r[k];
  }
 }  
 for (int i =0; i<l;i++)
 {
  int a =r[i];
  int j_ind=0;
  for (int j =i+1;j<l;j++)
  {
   if(r[i]<r[j])
   {
    r[i]=r[j];
    j_ind=j;
   }
  }
  r[j_ind]=a;
 }
 r[0]=global_max;
 return r;
}
int main()
{
 int length =10; 
 vector<int> v=random_vector(length);
 for (int i =0; i<length; i++){
  cout<<  v[i]<<" ";
 }
 vector<int> k=sort(v);
 cout <<endl;
 for (int i =0; i<length; i++){
  cout<<  k[i]<<" ";
 }
 return 0;
}




























