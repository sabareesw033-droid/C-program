#include <stdio.h>

int main() {
    int i, n, fact = 1;
    printf("Enter the value: ");
    scanf("%d", &n);

    // Start i at 1; continue while i is less than or equal to n
    for(i = 1; i <= n; i++) {
        fact = fact * i; // Multiply by the current number i
    }

    printf("Factorial: %d", fact);
    return 0;
}
