#include <stdlib.h>

/**********************************************************
 *
 *********************************************************/
typedef struct LNode{
    int val;
    struct LNode * next;
}LNode, *LinkList;

typedef enum Status{
    SUCCESS = 0,
    INVALID = -1
}

Status CreateLinkList(LinkList l, int value){
    l = (LinkList)malloc(sizeof(LNode));
    if(l == NULL){
        return INVALID;
    }

    l->val = value;
    l->next = NULL;
}

Status GetElem_L(LinkList l, int i , int & data){

}
