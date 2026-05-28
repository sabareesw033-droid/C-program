#include <stdio.h>
#include<ctype.h>
#define size 80

int main() {

    char letter[size];


    int count ;

    /* read the line */

    for(count=0;count<size;++count)

    letter[count]=getchar();

    /* display the line in upper case */

    for(count=0;count<size;++count)

    putchar(toupper(letter[count]));





}