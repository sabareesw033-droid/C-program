#include <stdio.h>
#include <ctype.h> // Required for tolower()

int main() {
    char str[30];
    int vowel = 0, consonant = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Safer than gets()

    while (str[i] != '\0') {
        char c = tolower(str[i]); // Convert to lowercase to check easily

        if (c >= 'a' && c <= 'z') { // Only count actual letters
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
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
