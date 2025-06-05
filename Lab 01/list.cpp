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

	for (int i = 0; i < n; i++)
	{
		PRODUCT* newNode = (PRODUCT*)malloc(sizeof(PRODUCT));
		newNode -> productID = (rand() % 100) + 1;
		newNode -> productQty = rand() % 50;
		newNode -> next = NULL;	
	
		if (!head)
		{
			head = tail = newNode;
		}
		else {

			tail->next = newNode;
			tail = newNode;
		}
		}
	return head;
};


void PrintList(PRODUCT* head) {
	PRODUCT* temp = head;
	while(temp != NULL) {
		std::cout << "Product ID: " << temp->productID << ", Quantity: " << temp->productQty << std::endl;
		temp = temp->next;
	}
	
}


void ReduceQty(PRODUCT* head) {
	PRODUCT* temp = head;
	while(temp != NULL) {
		if (temp->productID > 30) {
			temp->productQty -= 5;
			if (temp->productQty < 0) temp->productQty = 0;
		}
		temp = temp->next;
	}

};


void FreeList(PRODUCT* head) {
	PRODUCT* temp;

	while(head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}
}

