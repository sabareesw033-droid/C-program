#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num, *freq;
    int i, size;

    printf("\nEnter the size of the list: ");
    scanf("%d", &size);

    num = (int*)malloc(size * sizeof(int));
    freq = (int*)calloc(5, sizeof(int));

    printf("\nEnter numbers (0 to 4 only):\n");

    for(i = 0; i < size; i++) {
        printf("num[%d]: ", i);
        scanf("%d", &num[i]);

        
        if(num[i] < 0 || num[i] > 4) {
            printf("Invalid input! enter 0 to 4 only\n");
            i--;  
        }
    }

   
    for(i = 0; i < size; i++) {
        freq[num[i]]++;
    }

    printf("\nFrequencies:\n");
    for(i = 0; i < 5; i++) {
        printf("freq[%d] = %d\n", i, freq[i]);
    }

    return 0;
}