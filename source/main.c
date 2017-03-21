#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/func.h"
#include "../include/AdvancedLinkList.h"


int getTable(char ** pTable, int size){
    * pTable = (char *)malloc(size * sizeof(char));
    if(pTable == NULL){
        return -1;
    }else{
        return 0;
    }
}

int main(void){
    char * pTable= NULL;
    int i = 0;

	AdvancedLinkList l;
	int ages[5] = {3,4,5,6,7};
    if(getTable(&pTable, 10)!= -1){
        printf("malloc successful!");

        memset(pTable, '\0', 10);
//        strcpy(pTable, "Hello!");

        free(pTable);
    }
    printHelloWorld();

	CreateAdvancedLinkList(&l, ages, sizeof(int));

	PushAdvancedLinkList(&l, &ages[1], sizeof(int));
	PushAdvancedLinkList(&l, &ages[2], sizeof(int));
	PushAdvancedLinkList(&l, &ages[3], sizeof(int));
	PrintAdvancedLinkList(l, PrintInt);

	scanf("Press Any Key To Continue...");

    return 0;
}
