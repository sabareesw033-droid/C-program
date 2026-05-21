#include <stdio.h>
int main() {

    int a;
    int b;
    printf("Enter the value of A: \n");
    scanf("%d",&a);
    printf("Enter the value of B: \n");
    scanf("%d",&b);
    a>b ? printf("%d is Greater than %d",a,b):printf("%d is Greater than %d",b,a);
    return 0;
}