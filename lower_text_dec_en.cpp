#include <iostream> //header file
#include<cmath>
#include<array>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	cout<<1%26<<" 1%26"<<endl;
	int k;
	char r;
	cout << "Will you encrypt or decrypt (e/d)"<<endl;
	cin >>r;
	cout << "Quantify the k shift value "<<endl;
	cin >> k;
	if (k >25){
	 k = k%25;
	}
	if (r == 'd'){
	 k = (-1*k);
	}
	cout << "phase to encode/decode"<<endl;
	string entry;
	cin >>entry;
	//cout<<entry.size()<<"size of entry"<<endl;
	string result[entry.size()];
	char alphabet_array[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char capalphabet_array[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int j;
	//string result[4];
	for (int c = 0; c < entry.size(); c++)//for each character in entry
	{
	 //cout <<entry[c]<<"entry [c]"<<endl;
	 for (int x=0;x<=25;x++)//go through the letter array to find the correct alphabet
	 {
	  if (entry[c]==alphabet_array[x])// once character of entry is recognized, it is the xth element of letter array
	  {
	   j = x+k; //j = letter index from letter array after k shift
	   //cout<<j<<" j =x+k before if statement"<<endl;
	   if (j>25)//Goal x=23 should give a (index =0) => x+k=26 -1 =25 %25 =0 ->a
	   {
	    //cout <<"entered if j >25 "<<"j before mod"<<j<<endl;
	    j = (j-1)%25; //y =24 + 3 =27 -1 =26 %25 = 1 ->b
	   }
	   if (j<0)
	   {
	    j = j+26;//26 due to indexing
	   }
	   //cout << entry<<" entry"<<endl;
	   //cout << alphabet_array[x]<<" alphabet array[x] matching entry"<<endl;
	   //cout <<x<<"x, index of entry letter"<<endl;
	  }
	 }
	 result[c] = alphabet_array[j];//that entry char now = char after k shift
	}
	cout<<entry<< " with a k shift of "<<k<<" encrypts to "; 
	 for (int u=0; u<entry.size();u++){
          cout<<result[u];
         }

	return 0;
}	 
