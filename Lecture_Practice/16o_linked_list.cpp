#include <iostream>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;

struct node {
	int val;
	struct node * next;
};

int main(){
	node* head = NULL;
	node* second = NULL;
	node* third = NULL;

	head = (node *)malloc(sizeof(node));
	//allocate 3 nodes in the heap????
	second = (node *)malloc(sizeof(node));
	third = (node *)malloc(sizeof(node));
	head ->val =1;//setup up first node???
	head ->next = second; //note: pointer assignment rule???
	second ->val =2;
	second ->next = third;
	third ->val =3;
	third ->next = NULL;
	node* cur;
	cur = head;
	cout << &head <<endl;
	cout << head;
	//cout << head ->val<<endl;
	//cout << cur ->val<<endl;
	while (cur != NULL)
	{
	 cout << cur->val <<endl;
	 cur = cur ->next;
	}
	return 0;
}	
