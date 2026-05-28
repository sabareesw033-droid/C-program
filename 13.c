#include<stdio.h>
#include<string.h>

int main() {
    char *name;
    int length;
    name = "delhi";
    char *cptr = name;
    printf("%s\n",name);
    while(*cptr !='\0')
    {
        printf("%c is the stored at the address %u\n",*cptr,cptr);
        cptr++;

    }
    length=cptr-name;
    printf("\nlength of the string = %d\n ",length);
}
