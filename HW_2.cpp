#include <iostream> //header file
#include<cmath>
#include<array>
using std::cin;
using std::cout;
using std::endl;
using std::string;


void convert_to_star(string &str) {
        size_t pos = 0;
        while ((pos = str.find(" ", pos)) != string::npos) {
             str.replace(pos, 1, "*");
             pos += 1;
        }
        //return str;
}
void convert_to_space(string &str) {
        size_t pos = 0;
        while ((pos = str.find("*", pos)) != string::npos) {
             str.replace(pos, 1, " ");
             pos += 1;
        }
        //return str;
}



int main(){
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
	cin.ignore();
	cout << "phase to encode/decode"<<endl;
	string entry;
	getline(cin,entry);
	convert_to_star(entry);
	string result;//[entry.size()]
	char alphabet_array[52] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int j;
	for (int c = 0; c < entry.size(); c++)//for each character in entry
	{
	 
	 //cout <<entry[c]<<"entry [c]"<<endl;
	 for (int x=0;x<=51;x++)//go through the letter array to find the correct alphabet
	 {
	  if (entry[c]==alphabet_array[x])// once character of entry is recognized, it is the xth element of letter array
	  {
	   j = x+k; //j = letter index from letter array after k shift
	   //cout<<j<<" j =x+k before if statement"<<endl;
	   if (j>51)//Goal x=23 should give a (index =0) => x+k=26 -1 =25 %25 =0 ->a
	   {
	    //cout <<"entered if j >25 "<<"j before mod"<<j<<endl;
	    j = (j-1)%51; //y =24 + 3 =27 -1 =26 %25 = 1 ->b
	   }
	   if (j<0)
	   {
	    j = j+52;//26 due to indexing
	   }
	   //cout << entry<<" entry"<<endl;
	   //cout << alphabet_array[x]<<" alphabet array[x] matching entry"<<endl;
	   //cout <<x<<"x, index of entry letter"<<endl;
	 }
	 }
  	 result[c] = alphabet_array[j];//that entry char now = char after k shift
	 if (entry[c]='*'){
          result[c] =' ';
         }
	}
	cout<<entry<< " with a k shift of "<<k<<" encrypts to "; 
	 for (int u=0; u<entry.size();u++){
          cout<<result[u];
         }

	return 0;
}	 
