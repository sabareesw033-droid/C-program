#include <stdio.h>
int main() {
    int a,b,c,d,e;
    char A[20], B[20], C[20], D[20], E[20];

    printf("enter the subject \n");
    scanf("%s",A);
    printf("enter the marks \n");
    scanf("%d",&a);

    printf("enter the subject \n");
    scanf("%s",B);
    printf("enter the marks \n");
    scanf("%d",&b);

    printf("enter the subject \n");
    scanf("%s",C);
    printf("enter the marks \n");
    scanf("%d",&c);

    printf("enter the subject \n");
    scanf("%s",D);
    printf("enter the marks \n");
    scanf("%d",&d);

    printf("enter the subject \n");
    scanf("%s",E);
    printf("enter the marks \n");
    scanf("%d",&e);

    
    float average = (a+b+c+d+e)/5.0 ;

    printf(" %s: %d\n%s: %d\n%s: %d\n%s: %d\n%s: %d\n%s: %d\n",A,a,B,b,C,c,D,d,E,e);

    printf("average : %.2f\n",average);






}