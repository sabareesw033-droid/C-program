#include <stdio.h>
int main() {
    int c,d;

    char string[]="Cprograming";

    printf("\n\n");

    printf("============================\n");

    for(c=0;c<=9;c++)
    {
        d=c+1;

        printf("|%12.*s|\n",d,string);
    }
    printf("=========================\n");

    for(c=11;c>=0;c--)
    {
        d=c+1;

        printf("|%71.*s|\n",d,string);

    }
       

        }