

#ifndef __ADVANCEDLINKLIST__H_
#define __ADVANCEDLINKLIST__H_

typedef struct ALNode {
	void * data;
	struct ALNode * next;
}ALNode, *AdvancedLinkList;

typedef enum Status {
	SUCCESS = 0,
	INVALID = -1
}Status;

Status CreateAdvancedLinkList(AdvancedLinkList *l, void * data, int size);


Status PushAdvancedLinkList(AdvancedLinkList *l, void * data, int size);

void PrintAdvancedLinkList(AdvancedLinkList l, void(*f)(void *));

void PrintInt(void *n);

void PrintFloat(void *n);

#endif