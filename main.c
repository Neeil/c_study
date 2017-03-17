#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if(getTable(&pTable, 10)!= -1){
        printf("malloc successful!");

        memset(pTable, '\0', 10);
        strcpy(pTable, "Hello!");

        free(pTable);
    }
    printf("Hello World!");
    return 0;
}
