#include <stdio.h>
#include<string.h>
int main() 
{

    char name[12];

    gets(name);

 /*   puts(name); */

    printf("THE NAME YOU TYPED IS %s :", strupr(name));



}