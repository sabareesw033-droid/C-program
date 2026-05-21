#include<stdio.h>
int main()
{
    int A;
    printf("enter your marks :");
    scanf("%d",&A);
    
    if(A>90)
    printf("cgpa = 9");

    else if (A>70 && A<90)
    printf("cgpa =8");

    else if (A>50 && A<70)
    printf("cgpa =6");

    else 
    printf("govindha govindha");
}