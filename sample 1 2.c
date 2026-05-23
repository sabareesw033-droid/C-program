#include <stdio.h>
#include <string.h> // Required for strcpy

// 1. Defining the struct type
struct Student {
    char name[50];     // Must provide a size
    long long rollNumber; // Changed to long long for large IDs
    float gpa;
};

int main() {
    // 2. Declaring a struct variable
    struct Student s1;

    // 3. Accessing members
    s1.rollNumber = 732724121044LL; 
    s1.gpa = 9.5;
    
    // Use strcpy for strings, and put the name in "quotes"
    strcpy(s1.name, "sabareeswarn");

    printf("Name: %s\nRoll: %lld\nGPA: %.1f", s1.name, s1.rollNumber, s1.gpa);

    return 0;
}
