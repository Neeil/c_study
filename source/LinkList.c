#include <stdlib.h>

/**********************************************************
 *
 *********************************************************/
typedef struct LNode{
    int data;
    struct LNode * next;
}LNode, *LinkList;

typedef enum Status{
    SUCCESS = 0,
    INVALID = -1
}



Status GetElem_L(LinkList l, int i , int & data){

}
