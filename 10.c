#include <stdio.h>

int main() {
    int a, b, c, d, e;
    char A[20], B[20], C[20], D[20], E[20];

    printf("Enter subject 1 and marks: ");
    scanf("%s %d", A, &a);

    printf("Enter subject 2 and marks: ");
    scanf("%s %d", B, &b);

    printf("Enter subject 3 and marks: ");
    scanf("%s %d", C, &c);

    printf("Enter subject 4 and marks: ");
    scanf("%s %d", D, &d);

    printf("Enter subject 5 and marks: ");
    scanf("%s %d", E, &e);

    float average = (a + b + c + d + e) / 5.0;

    printf("\n--- Report Card ---\n");
    printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n%s: %d\n", A, a, B, b, C, c, D, d, E, e);
    printf("Average: %.2f\n", average);

    return 0;
}
