#include <stdio.h>
int main() {
    
    int a;

    printf("give a values:");

    scanf("%d",&a);

    int X=(a/1)%10;

     printf("one's place :%d\n",X);

    int Y=(a/10)%10;

    printf("ten's place :%d\n",Y);

    int Z=(a/100)%10;

    printf("hundread'th place :%d\n",Z);

}