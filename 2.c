#include <stdio.h>
int main() {


    char line[81],character;

    int c;

    c=0;

    printf("enter text. press <return> at end\n");

    do{
        character=getchar();

        line[c]=character;
        c++;
    }
    while(character A !='\n');

    c-=1;
    
    line[c]='\0';
    
    printf("\n%s\n",line);
    
    }