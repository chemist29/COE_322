#include<iostream>
#include<cmath>
using std::cout;
using std::endl;



int main(){
 for (int u=1;u<100;u++)
 {
  int a=u;
  for (int v=1;v<100;v++)
  {
   int b =v;
   for (int w =1;w<100;w++)
   {
    int c =a*a+b*b;
    if (c==pow(w,2) && a<b){
     cout << a<<", "<<b<<", "<<w<<endl;
    }
   }
  }
 }
 return 0;
}     
