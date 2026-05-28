#include<stdio.h>
int main() {
    int a,b;
    int *p1,*p2;
    p1=&a,p2=&b;

    char c,d;
    char *p3,*p4;
    p3=&c,p4=&d;

    float e,f;
    float *p5,*p6;
    p5=&e,p6=&f;

   printf("the address of a%u and b%u\n",&a,&b);
    /* now the address of a and b */
    /* incrementing pointers */
    p1++;
    p2++;
    printf("the address of a%u and b%u\n",&p1,&p2);


    printf("the address of c%u and d%u\n",&c,&d);
    p3++;
    p4++;
    printf("the address of a%u and b%u\n",&p3,&p4);
    /* now the address of c and d */
    /* incrementing pointers */




       printf("the address of e%u and f%u\n",&e,&f);
        p5++;
        p6++;
        printf("the address of a%u and b%u\n",&p5,&p6);
    /* now the address of e and f */
    /* incrementing pointers */


}