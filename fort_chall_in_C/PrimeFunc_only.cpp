#include<iostream>
using std::cout;
using std::endl;
using std::cin;
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

int main()
{
 int k;
 cin >> k;
 cout << "Is k prime ? " << is_prime(k)<<endl;
 return 0;
}
