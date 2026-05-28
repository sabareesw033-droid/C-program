#include <stdio.h>
#include<string.h>

int main() {
    char str[30];

    int vowel=0,consonent=0,i=0;

    printf("enter a string: ");

    gets(str);

    while(str[i] != '\0')
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e'  || str[i]=='E'  || str[i]=='I' 

        || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' ||str[i]=='u' ){

        vowel++;
        }

        else {
        consonent ++;
        }

        i++;

           }
           printf("\nnumber of vowels = %d",vowel);

           printf("\nnumber of consonent = %d",consonent);

}
