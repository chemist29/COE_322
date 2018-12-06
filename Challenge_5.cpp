#include <iostream> //header file
using std::cin;
using std::cout;
using std::endl;

int Sum_Squares(int s);

int main(){
	double s =100;
	Sum_Squares(s);
	for (int i =1; i<=100; i++)
	{
 	 cout << "The sum of first " << i << " = "<< Sum_Squares(i) << endl;
	}
	return 0;
}

int Sum_Squares(int s)
{
	double sum =0;
	if (s ==1)
	{
		sum =1;
		return sum;
	}
	else
	{
		sum = (s*s) + Sum_Squares(s-1);
		return sum;
	}
}	
	
