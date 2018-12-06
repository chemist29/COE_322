//program to replace every space in string with 2 stars   
#include<iostream>
#include<string>
using namespace std;


string convert(string str) {
        size_t pos = 0;
        while ((pos = str.find(" ", pos)) != string::npos) {
             str.replace(pos, 1, "*");
             pos += 1;
        }
        return str;
}


int main()
     {
       string str;
       cout<<"Enter a string "<<endl;
       getline(cin,str);
       cout<<convert(str);
       cin.get();
       return 0;
      }
