#include "list.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


//Question 1 - Implementaation - devki - tanveer

PRODUCT* CreateList(int n)
{
	srand(time(NULL));

	PRODUCT* head = NULL;
	PRODUCT* tail = NULL;

	for (i = 0, i <= n, i++)
	{
		PRODUCT newNode = new Product;
		newNode->id = rand() % 100 + 1;

	}


};


PrintList(PRODUCT* head);


TraverseList(PRODUCT* head);


ReduceQty(PRODUCT* head);


FreeList(PRODUCT* head);
