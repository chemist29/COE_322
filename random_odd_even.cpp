#include <iostream> //header file
using std::cin;
using std::cout;
using std::endl;
#include <time.h>

int main () {
	srand (time(NULL)); //Google srand
	int rand();
	int random_number = rand();
	cout << "The random number is " << random_number << endl;
	if (random_number%2 == 0) {
	cout << "The number represents heads" << endl;
	}
	else {
	cout << "The number represents tails" << endl;
	}
	cout <<"Thank you Jamie for giving me a head start!"<<endl;
	return 0;
}

