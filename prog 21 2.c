#include <stdio.h>

int main() {

    char a = 'A';

    char b = 'B', c = 'C';

    char d;
    d = 'D';

    char e = 65;



    printf("Character value of a = %c\n", a);

    printf("Character value of b = %c\n", b);

    printf("Character value of c = %c\n", c);

    printf("Character value of d = %c\n", d);

    printf("ASCII value of e     = %d\n", e);

    printf("Character of e       = %c\n", e);



    char f, g;

    printf("\nEnter a character using scanf : ");
    scanf("%c", &f);

    printf("Character using scanf = %c\n", f);



    getchar();

    printf("\nEnter a character using getchar : ");
    g = getchar();

    putchar(g);

    return 0;
}