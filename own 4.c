#include <stdio.h>
{
    int num, count = 0;



   
        while (num > 0) {

            num = num/ 10;

            count++;
        }
    int main() 

            printf("Enter a Number: ");

    scanf("%d", &num);

    printf("\nNumber of digits: %d", count);
    
    return 0;

 }