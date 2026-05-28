#include <stdio.h>
int main() {
    char A[] = "sscet";
    char B[] = "SSCET";
    char C[] = "yes";
    char D[] = "no";

    printf("\n\n");

    printf("is A and B are Equal ?\n\n");

    if(strcpy(A,B) == 0)
    {
        printf("is A and B are Equal \n\n");
    }
    else 
    {
        printf("A and B are not equal %s\n ",D);

    }
        printf("%s",strcmp(A,B)==0? C:D);
   
}