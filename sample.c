#include <stdio.h>

int main() {
    char name[50];
    int marks[6];
    int sum = 0;
    float average;

    // Enter name using char array
    printf("Enter student name: ");
    scanf("%s", name);

    // Enter marks for 6 subjects
    printf("Enter marks for 6 subjects:\n");
    for(int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; // Adding integers to sum
    }

    // Calculating average
    average = (float)sum / 6;

    // Displaying the results
    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %d\n", sum);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
