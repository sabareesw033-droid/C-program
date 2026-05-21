#include <stdio.h>
int main() {
    char oper;
    double firstnumber,secondnumber;

    printf("enter your operator(+,-,*,/):");
    scanf("%d",&oper);

    printf("enter first operand :\n");
    scanf("%lf",&firstnumber);

    printf("enter second operand:\n");
    scanf("%lf",&secondnumber);

    switch(oper)
    {
        case '+':
        printf("%1lf + %1lf = %1lf",firstnumber,secondnumber,firstnumber+secondnumber);
        break;

         case '-':
        printf("%1lf - %1lf = %1lf",firstnumber,secondnumber,firstnumber-secondnumber);
        break;

         case '*':
        printf("%1lf * %1lf = %1lf",firstnumber,secondnumber,firstnumber*secondnumber);
        break;

         case '/':
        printf("%1lf / %1lf = %1lf",firstnumber,secondnumber,firstnumber/secondnumber);
        break;

        // operator is doesn't match any  case constant (+,-,*,/)

        default:
        printf("error operator is not correct");

        return 0;

        
        
            }
}