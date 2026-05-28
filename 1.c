#include <stdio.h>
#include<stdlib.h>
#define NULL0


int main() {

    int*p,*table;
    int size;

    printf("\nwhat is the size of table ?");
    scanf("%s",&size);

    printf("\n");
    /* memory allocation */

    if((table=(int*) malloc(size *sizeof(int))) == NULL)
    {
        printf("no space available \n");
        exit(1);
    }
        printf("\n Address of the first byte is %u\n",table);
        /* reading table values */

        printf("\ninput table values\n");

        for(p=table;p<table+size;p++){
        scanf("%d",p);        }

        /* printing table values in reverse order */

        for(p=table +size-1;p>=table;p--);{
        printf("%d is stored at address %u \n",*p,p);
}}


