#include <stdio.h>
#include<string.h>

int main() {
    char name[]="rajinikanth";

    int n;

    n=strlen(name);

    printf("%s has %d letters \n\n",name ,n);   

    printf("%s" ,strcat(strcat(name,"is a superstar")),"the boss"); 

    char name[]="bharathi";

    char degree ="dr";

    char join[]=strcat(name,degree);

    printf("%S",join);
}