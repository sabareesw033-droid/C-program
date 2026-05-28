#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define NULL0

int main() {
    char *buffer;
    /* allocating memory */

    if((buffer=(char *)malloc(10)) == NULL)
    {
        printf("malloc failed.\n");
        exit(1);
    }
    printf("buffer of size %d created \n",buffer);
    strcpy(buffer, "hyderabad");

    printf("\nbuffer contains %d\n",buffer);

    /* real location */

    if((buffer=(char*)realloc(buffer,15)) ==NULL)
    {
        printf("real location failed. \n");
        exit(1);
    }
    printf("\nbuffer size modified. \n");
    printf("\nbuffer still contains :%s \n",buffer);

    strcpy(buffer,"sangakiri");
    printf("\nbuffer  now comntains : %s \n",buffer);

    /* free memory */
    free(buffer);

}

