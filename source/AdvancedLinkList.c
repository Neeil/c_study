
#include <stdlib.h>
#include "../include/LinkList.h"

typedef struct ALNode{
	void * data;
	struct ALNode * next;
}ALNode, *AdvancedLinkList;

Status CreateAdvancedLinkList(AdvancedLinkList *l, void * data, int size) {

	ALNode * node;
	int i;
	node = (ALNode *)malloc(sizeof(ALNode));
	
	node->data = malloc(size);
	node->next = NULL;	
	for (i = 0; i < size; i++) {
		*((char *)node->data + i) = *((char *)data + i);
	}
	*l = node;

	return SUCCESS;
}

Status PushAdvancedLinkList(AdvancedLinkList *l, void * data, int size) {
	ALNode *current = *l;
	ALNode *node;
	int i = 0;
	node = (ALNode *)malloc(sizeof(ALNode));
	node->data = malloc(size);
	node->next = NULL;
	for (i = 0; i < size; i++) {
		*((char *)node->data + i) = *((char *)data + i);
	}

	while (current->next != NULL) {
		current = current->next;
	}

	current->next = node;

	return SUCCESS;
}


void PrintAdvancedLinkList(AdvancedLinkList l, void (*f)(void *)) {
	while (l != NULL) {
		(*f)(l->data);
		l = l->next;
	}
}

void PrintInt(void *n) {
	printf("%d", *(int *)n);
}

void PrintFloat(void *n) {

	printf("%f", *(float *)n);
}