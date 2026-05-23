#include <stdio.h>
int main() {
    
    int a;

    printf("enter a number:");
    scanf("%d",&a);

    int ones=(a/1)%10;
    int tens=(a/10)%10;
    int hundreds=(a/100)%10;

    printf("ones place :%d\n",ones);
    printf("tens place :%d\n",tens);
    printf("hundread place :%d\n",hundreds);
}