#include<iostream>
using std::cout;
using std::endl;


int main()
{
 for (int i =0;i<100;i++)
 {
  if (i ==0 || i==1){
   cout << i <<" is not prime by definition"<<endl;
  }
  if (i ==2){
   cout << "2 is prime"<<endl;
  } 
  bool prime = false;
  for (int j =2;j<i;j++){
   if (i%j ==0){
    cout <<i <<" is not prime "<<j<<" is a factor"<<endl;
    prime = false;
    break;
   }
   else{
    prime=true;
   }
  } 
  if (prime == true){
   cout << i<<" is prime"<<endl;
  }
 } 
 return 0;
}
