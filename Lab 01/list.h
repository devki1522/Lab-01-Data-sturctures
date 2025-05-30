#pragma once
// Group 03 - tanveer - Devki - PROG72370 - S25

typedef struct PRODUCT {
	int productID;
	int productQty;
	PRODUCT* next;
}PRODUCT ;

PRODUCT* CreateList(int n);
void PrintList(PRODUCT* head);
void ReduceQty(PRODUCT* head);
void FreeList(PRODUCT* head);
