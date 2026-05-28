#include <stdio.h>
int main() {
    FILE *f1;
    char c;
    printf("data input\n\n");
    /* open the file input */
    f1==fopen("INPUT","w");

    /*get a character from keyboard */

    while((c=getchar()) !=EOF){

    /* write a character to INPUT */
    putc(c,f1);

    /*close the file INPUT */
    fclose(f1);
    printf("\ndata output\n\n");

    /* reopen the file input */
    f1=fopen("INPUT","r");
    }

    /* read a character from INPUT */
    while((c=getc(f1)) !=EOF) {
    
    /* display a character screen */
    printf("%c",c);

    /* close the file INPUT */
    fclose(f1);
}}