#include <iostream>
using std::cout;
using std::endl;
#include <time.h>
//Name = Akksay, eid = as68397
int main () {
	 srand (time(NULL));
	 int num_heads =0;
	 for (int i=0;i<1000000;i++){
	 int rand();
	 int random_number = rand();
	 if (random_number%2 == 0) {
	 num_heads +=1;
	 }
	}
	cout << "total heads = " << num_heads <<endl;
	cout << "total tails = " << 1000000-num_heads <<endl;
	
	return 0;
}
