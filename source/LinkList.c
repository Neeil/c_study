
#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"


//typedef struct LNode {
//	int val;
//	struct LNode * next;
//}LNode, * LinkList;
//
//typedef enum Status {
//	INVALID = -1,
//	SUCCESS = 0
//}Status;

Status CreateList(LinkList * l, int value) {
	
	*l = (LinkList)malloc(sizeof(LNode));
	
	if (*l == NULL) {
		return INVALID;
	}

	(*l)->val = value;
	(*l)->next = NULL;
	
	return SUCCESS;
}

Status PrintList(LinkList l) {

	LNode * node = l;

	if (node == NULL) {
		return INVALID;
	}	

	while (node != NULL) {
		printf("%d\n", node->val);
		node = node->next;
	}

	return SUCCESS;
}

Status Push(LinkList  l, int value) {
	
	LNode * node;
	LNode * last_node = l;
	if (l == NULL) {
		return CreateList(&l, value);
	}

	node = malloc(sizeof(LNode));
	if (node == NULL) {
		return INVALID;
	}

	while (last_node->next != NULL) {
		last_node = last_node->next;
	}

	last_node->next = node;
	last_node->next->val = value;
	last_node->next->next = NULL;

	return SUCCESS;
}

Status Insert(LinkList *l, int position, int value) {
	
	LNode * node;
	LinkList current = *l;
	int i = 0;
	if (l == NULL) {
		return INVALID;
	}

	node = malloc(sizeof(LNode));
	node->val = value;

	// For insert at the header of the LinkList;
	if (position == 0) {
		node->next = current;
		*l = node;
	}
	else {
		// For insert in the middle of the LinkList;
		for (i = 0; i < position; i++) {
			if (current->next != NULL) {
				current = current->next;
			}
			else {
				return INVALID;
			}
		}
		
		node->next = current->next;
		current->next = node;
	}

	return SUCCESS;
}

Status Pop(LinkList *l, int * value) {

	if (*l == NULL) {
		return INVALID;
	}

	*value = (*l)->val;
	(*l) = (*l)->next;

	return SUCCESS;
}


// Remove the value at any position of the LinkList
Status Remove(LinkList *l, int position) {

	int i;
	int temp;
	LNode * current = *l;
	LNode * node;
	if (position == 0) {
		return Pop(l, &temp);
	}
	else {
		for (i = 0; i <( position - 1); i++) {
			if (current->next != NULL) {
				current = current->next;
			}
			else {
				return INVALID;
			}
		}

		node = current->next;
		current->next = current->next->next;
		free(node);

		return SUCCESS;		
	}
}

Status RemoveLast(LinkList *l) {

	LNode * current = *l;
	if ((*l) == NULL) {
		return INVALID;
	}

	if (current->next == NULL) {
		free(current);
		return SUCCESS;
	}

	while (current->next->next != NULL) {
		current = current->next;
	}

	free(current->next);

	current->next = NULL;

	return SUCCESS;
}
