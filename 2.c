
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "bharathi";
    char degree[] = "dr"; 
    
    // Allocate enough memory to hold "bharathi" + "dr" + null terminator
    char join[20]; 
    
    // Copy the first string into join, then concatenate the second
    strcpy(join, name);
    strcat(join, degree);
    
    printf("%s\n", join);
    
    return 0;
}
