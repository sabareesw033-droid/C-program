#include <stdio.h>
int main() {
    int i,n,fact=1;

    printf("enter the values  ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        fact=fact*n;
    }
    printf("factorial  %d",fact);


    
    return 0;
}