#include<stdio.h> 

int main() { 
    int num; 
    
    printf("Enter a number: "); 
    scanf("%d", &num); 

num=0;
    while(num >= 5) { 
        num++; 
    } 
    
    num = num + 1; 
    printf("The values are %d", num); 
    
    return 0; 
}
