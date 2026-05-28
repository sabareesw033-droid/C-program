#include <stdio.h>
int main() {

    char line[80];

    scanf("%[1234567890]",line);

    printf("%s",line);

    
    scanf("%[^abcdefghijklmnopqrstuvwxyz]",line);

}

