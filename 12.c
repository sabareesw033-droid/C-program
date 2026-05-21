#include <stdio.h>
int main() {
    int a,b,c;

    printf("enter a number a ");
    scanf("%d",&a);

    printf("enter another number b ");
    scanf("%d",&b);

    if(a>b)
    printf("a=%d and b=%d - therefore a is greater than b",a,b);

    else if(a<b)
    printf("a=%d and b=%d - therefore a is smaller than b",a,b);

    else
    printf("a=%d and b=%d - therefore a&b are equal",a,b);



}