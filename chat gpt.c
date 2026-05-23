#include <stdio.h>

// Function to count digits
int countDigits(int num) {
    int count = 0;
    
    // Handle the case if the number is 0
    if (num == 0) return 1;
    
    // Make number positive if it's negative
    if (num < 0) num = -num;

    while (num > 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int main() {
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    // Call the function
    int result = countDigits(num);

    printf("\nNumber of digits: %d", result);
    
    return 0;
}
