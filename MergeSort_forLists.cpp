// Merge sort

#include "stdafx.h"
#include <stdlib.h>


struct node {
	int val;
	node* next;
};


void ins(node *& first, int x) {
	node* p = new node;
	p->val = x;
	p->next = first;
	first = p;
}


node* split(node* &first, int n) {
	node* tmp = first;
	for (int i = 0; i < n / 2 - 1; i++) {
		tmp = tmp->next;
	}
	node* second = tmp->next;
	tmp->next = NULL;
	return second;
}


void mergeSort(node* &first, int n) {
	node* second = NULL;
	if (n > 1) {
		second = split(first, n);
		if (n % 2 == 0) {
			mergeSort(first, n / 2);
			mergeSort(second, n / 2);
		}
		else {
			mergeSort(first, n / 2);
			mergeSort(second, (n + 1) / 2);
		}
	}
	else {
		return;
	}

	node* sorted = NULL;
	if (first->val < second->val) {
		sorted = first;
		first = first->next;
	}
	else {
		sorted = second;
		second = second->next;
	}
	node* end = sorted;
	while (first != NULL && second != NULL) {
		if (first->val < second->val) {
			end->next = first;
			first = first->next;
		}
		else {
			end->next = second;
			second = second->next;
		}
		end = end->next;
	}
	if (first != NULL) {
		end->next = first;
	}
	else if (second != NULL) {
		end->next = second;
	}
	first = sorted;
}


int main()
{
	node* first = new node;
	first->val = 2;
	first->next = NULL;
	ins(first, 5);
	ins(first, 1);
	ins(first, 6);
	ins(first, 3);
	ins(first, 4);

	mergeSort(first, 6);

    return 0;
}
