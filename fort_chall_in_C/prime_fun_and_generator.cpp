#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool is_prime(int i);

void prime_vector( std::vector<int> &p_vec);

int main()
{
 int num_tot_prime;
 cout << "How many primes to generate ?"<<endl;
 cin >> num_tot_prime;
 std::vector<int> b(num_tot_prime);
 prime_vector(b);
 return 0;
}

bool is_prime(int i)
{
  bool prime = false;
  if (i ==0 || i==1){
   prime = false;
  }
  if (i ==2){
   prime = true;
  }
  if (i>2){
   for (int j =2;j<i;j++){
    if (i%j ==0){
     //cout <<i <<" is not prime "<<j<<" is a factor"<<endl;
     prime = false;
     break;
    }
    else{
     prime=true;
    }
   }
  }
  return prime;
}

void prime_vector( std::vector<int> &p_vec)
{
 int num_p = p_vec.size();
 int k =0,c=2;
 bool a;
 while (k <num_p)
 {
  a = is_prime(c);
  if (a ==1){
   p_vec[k]=c;
   k +=1;
   c +=1;
  }
  else{
     c +=1;
  }
 }
 for (int i =0; i<k;i++){
  cout << p_vec[i]<<endl;
 }
}

