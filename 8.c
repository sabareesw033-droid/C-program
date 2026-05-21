#include <stdio.h>
int main()
{
    /*incremental operation difference*/

    int a=100;

    int b,c;

    printf("the value now %d\n ",a);

    a=a+1;

   printf("the value now %d\n ",a);

    b=a++;

    printf("the value now %d\n ",b);

    c=++a;

    printf("the value now %d\n ",c);

    }