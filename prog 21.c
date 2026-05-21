#include <stdio.h>

int main() {

    int a = 10;

    int b = 20, c = 30;

    int d;
    d = 40;

    int e = 'a';



    printf("Decimal value of a = %d\n", a);

    printf("Value of b = %i\n", b);

    printf("Unsigned value of c = %u\n", c);

    printf("Hexadecimal of d = %x\n", d);

    printf("Hexadecimal CAPITAL of d = %X\n", d);

    printf("Character stored in e = %c\n", e);

    printf("ASCII value of e = %d\n", e);



    

    printf("\nEnter an integer value : ");
    scanf("%d", &a);



    printf("\nNormal printing     = %d\n", a);

    printf("Right aligned       = %12d\n", a);

    printf("Left aligned        = %-12d\n", a);

    printf("Print with zeros    = %012d\n", a);

    printf("Print with + sign   = %+d\n", a);

    return 0;
}