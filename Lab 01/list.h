#pragma once
// Group 03 - tanveer - Devki - PROG72370 - S25

struct PRODUCT {
	int productID;
	int productQty;
	PRODUCT* next;
};

PRODUCT* CreateList(int n);
PrintList(PRODUCT* head);
TraverseList(PRODUCT* head);
ReduceQty(PRODUCT* head);
FreeList(PRODUCT* head);
