#include<stdio.h>
// 1. Defining the struct type

struct Student {
    char name[30];
    long long rollNumber;
    float gpa;
};

int main() {
    // 2. Declaring a struct variable
    struct Student s1;{

    // 3. Accessing members using the dot (.) operator
    strcpy(s1.name,"sabareeswaran");
    s1.rollNumber = 732724121044;
    s1.gpa = 9.5;
    
    printf("name  %c\n rollno %ll\n gpa %f\n",s1.name,s2.rollnumber,s1.gpa);
};
}
