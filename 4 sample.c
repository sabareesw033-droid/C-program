#include <stdio.h>

int main() {
    FILE *f1;
    int c; // Must be int to handle EOF correctly

    printf("data input\n\n");

    // Open file for writing
    f1 = fopen("INPUT", "w");
    if (f1 == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Read from keyboard until Ctrl+D (Linux) or Ctrl+Z (Windows)
    while ((c = getchar()) != EOF) {
        putc(c, f1);
    }
    
    // Close after the loop finishes
    fclose(f1); 

    printf("\ndata output\n\n");

    // Reopen file for reading
    f1 = fopen("INPUT", "r");
    if (f1 == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read from file and display on screen
    while ((c = getc(f1)) != EOF) {
        printf("%c", c);
    }

    // Close after the reading loop finishes
    fclose(f1); 
    
    return 0;
}
