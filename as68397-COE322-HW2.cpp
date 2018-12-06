#include <iostream> //header file
#include<cmath>
#include<array>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//Program Author = Akksay
//Caesar Cipher
//This will ask userer to  encrypt or decrypt any lowercase text made with the 
//26 alphabets, including spaces, given some interger k value
//Created = 10/18/18



void convert_to_star(string &str) {
        size_t pos = 0;
        while ((pos = str.find(" ", pos)) != string::npos) {
             str.replace(pos, 1, "*");
             pos += 1;
        }
        //return str;
}

int main(){
	int k;
	char r;
	cout << "Will you encrypt or decrypt (e/d)"<<endl;
	cin >>r;
	cout << "Specify the k, any integer(including negative) value! "<<endl;
	cin >> k;
	k = abs(k);
	if (k >25){
	 k = k%25;
	}
	if (r == 'd'){
	 k = (-1*k);
	}
	cout << "Phrase to encrypt/decrypt (case sensitive)?"<<endl;
	string entry;
	cin.ignore();
	getline(cin,entry);
	convert_to_star(entry);
	string result[entry.size()];
	char alphabet_array[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char capalphabet_array[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int j;
	int J;
	bool lower;
	for (int c = 0; c < entry.size(); c++)//for each character in entry
	{
	 for (int x=0;x<=25;x++)//go through the letter array to find the correct alphabet
	 {
	  if (entry[c]==alphabet_array[x])// once character of entry is recognized, it is the xth element of letter array
	  {
	   lower = true;
	   j = x+k; //j = letter index from letter array after k shift
	   if (j>25)//Goal x=23 should give a (index =0) => x+k=26 -1 =25 %25 =0 ->a
	   {
	    j = (j-1)%25; //y =24 + 3 =27 -1 =26 %25 = 1 ->b
	   }
	   if (j<0)
	   {
	    j = j+26;//26 due to indexing
	   }
	  }
	  if (entry[c] ==capalphabet_array[x])
	  {
	    lower = false;
	    J = x+k; //j = letter index from letter array after k shift
           if (J>25)//Goal x=23 should give a (index =0) => x+k=26 -1 =25 %25 =0 ->a
           {
            J = (J-1)%25; //y =24 + 3 =27 -1 =26 %25 = 1 ->b
           }
           if (J<0)
           {
            J = J+26;//26 due to indexing
           }
	  }
	 }
	 if (lower == true)
	 { 
	  result[c] = alphabet_array[j];
	 }
	 if (lower == false)
	 { 
	  result[c] = capalphabet_array[J];
	 }
	 if (entry[c]=='*')
	 {
	  result[c]=' ';
	 }
	}
	if (r =='d'){
	 cout<<" your phrase decrypts to: "; 
	}
	else{
	 cout<<" your phrase encrypts to: "; 
	}
	for (int u=0; u<entry.size();u++){
          cout<<result[u];
         }
	cout<<endl;
	return 0;
}	 
