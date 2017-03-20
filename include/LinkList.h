

#ifndef __LINKLIST__H
#define __LINKLIST__H
/**********************************************************
*
*********************************************************/
typedef struct LNode {
	int val;
	struct LNode * next;
}LNode, *LinkList;

typedef enum Status {
	SUCCESS = 0,
	INVALID = -1
}Status;


Status CreateList(LinkList * l, int value);

Status PrintList(LinkList l);

Status Push(LinkList  l, int value);

Status Insert(LinkList *l, int position, int value);

Status Pop(LinkList *l, int * value);

// Remove the value at any position of the LinkList
Status Remove(LinkList *l, int position);
Status RemoveLast(LinkList *l);

/*tatus GetElem_L(LinkList l, int i , int & data){

}*/

#endif