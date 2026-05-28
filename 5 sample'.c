#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for toupper

int main() {
    char str[30];
    int vowel = 0, consonant = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    while (str[i] != '\0' && str[i] != '\n') {
        char c = toupper(str[i]); // Convert to uppercase for easy checking
        
        if (c >= 'A' && c <= 'Z') { // Check if it's a letter
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }
        i++;
    }

    printf("\nNumber of vowels = %d", vowel);
    printf("\nNumber of consonants = %d", consonant);

    return 0;
}
