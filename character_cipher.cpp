#include <iostream> //header file
#include<cmath>
#include<array>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	int Num_Array[26];
	int k =3;
	char entry;
	char result;
	char alphabet_array[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
	cin >>entry;
	int j;
	
	 for (int x=0;x<25;x++)
	 {
	  if (entry==alphabet_array[x])
	  {
	   j = x+k;
	   //cout << entry<<" entry"<<endl;
	   //cout << alphabet_array[x]<<" alphabet array[x] matching entry"<<endl;
	   //cout <<x<<"x, index of entry letter"<<endl;
	  }
	  result = alphabet_array[j];
	 }
	//}
	cout <<"if k = "<<k<<" "<< entry << " encodes to "<<result<<endl;
	

	return 0;
}	 
