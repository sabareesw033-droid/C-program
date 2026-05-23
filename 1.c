#include <stdio.h>
int main() {
    int A,B;
    int hello;
    A=10;
    B=20;
    

    hello=A;
    
    A=B;

    B=hello;
    
    printf("values A is %d \n value B is %d",A,B);
}