
#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int Fib(int i)
{
 if (i < 2){
  return 1;
 }
 return Fib(i-1) + Fib(i-2);
}

//eid: as68397 , Name- akksay singh
int main(){
	int start;
	int output;
	string reply;
	cout << "Would you like a specific term(st) or first n elements of the sequence(seq)? (st/seq)"<<endl;
	cin >> reply;
	if (reply == "seq")
	{
	 cout << "How many terms? (1st terms has index 0)"<<endl;
	 cin >> start;
	 //cout << "About to initiliaze int array for storage" <<endl;
  
	 //int fib_array[start];
	 //cout << "Storage initialized" <<endl;
	 for (int j =0; j<start;j++)
	 {
	  output=Fib(j);
	  cout << output << " ";
	 }
	 //cout << "MAde it through recursion call" <<endl;
	 //for (int j =0; j<start;j++)
	 //{
 	 //cout << fib_array[j] << " ";
	 //}
	 //cout << "Made it through accessing fib array" <<endl;
	}
	else{
	cout << "Which term?"<<endl;
	cin >> start;
	cout << Fib((start-1))<< endl;
	}
}
 

