
// Group 03 - tanveer - Devki - PROG72370 - S25

#include <iostream>
#include "list.h"
#include "list.cpp" // include the implementation of the list functions

using namespace std;

int main(void) {
	int n;
	cout << "enter a number to create list: ";
	cin >> n;

	PRODUCT* newlist = CreateList(n); // creating a new list with input from user 

	cout << "\nPrinting list with original Quantity. \n";

	PrintList(newlist);

	ReduceQty(newlist); // this will go thru the list and find quanties greater than30 and reduce them by 5

	cout << "\n\n\nFinal list after reduced Quantity.\n";

	PrintList(newlist);	// print the updated list


	FreeList(newlist);	// frees allocated memory


	return 0;
}

