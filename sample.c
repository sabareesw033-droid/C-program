#include <stdio.h>

int main() {
    // Suggesting 'i' be kept in a register for faster loop execution
    register int i; 
    
    for (i = 0; i < 1000; i++) {
        // High-frequency operations here
    }

    // This would cause a compiler error:
    // int *ptr = &i; 

    return 0;
}
