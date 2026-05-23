#include <stdio.h>

int main() {

    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int count;
    for(count=0;num != 0;count++){
        
        
        num=num/10;
    }
    printf("\n\nNumber of Digit that you Entered is %d",count);

    return 0;
}