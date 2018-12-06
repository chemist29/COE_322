#include<iostream>
using std::cout;
using std::endl;

int main()
{
 int k =0;
 for(int i=2; i<1000; i++)
 {
  //cout <<"hello world "<<i<<endl;
  int L=1;
  int j = i;
  while (j !=1)
  {
  if (j%2 ==0)
   {
    j = j*0.5;
    L +=1;
   }
   else
   {
    j = 3*j+1;
    L +=1;
   }
   if (j==1)
   {
    if (L>k){
     k = L;
     cout << "series starting with  "<<i<<" has "<< L<<" terms "<<endl;
    }
   }
  }
 }
 return 0;
}
