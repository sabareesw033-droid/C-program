#include <stdio.h>
int main() {
    /* LOCAL  VARIABLE DEFINITION */

    char grade;
    printf("enter your grade :");
    scanf("%c",&grade);
    
    switch(grade)
    {
        case 'A':

        printf("excellent \n");

        break;

        case 'B':

        case 'C':

        printf("well done \n");

        break;

        case 'D':

        printf("you passed\n");

        break;

        case 'F':

        printf("better try again\n");

        break;

        default:

        printf("invalid  grade\n");

        printf("your grade is %c\n",grade);

        return 0;

    }

    
}