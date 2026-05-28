#include<stdio.h>
#include<string.h>

// palindrome
void main()
{
    char chk='t',str[30];
    int len,left,right;
    printf("\nenter a string :");
    scanf("%s",str);
    len=strlen(str);
    left=0;
    right=len-1;
    
    while(left<right &&chk=='t')
    {
        if(!(str[left]==str[right]))

        chk='f';

        left++;

        right++;
    }
    if(chk=='t')
    {
        printf("\nthe string %s is a polindrome ",str);
    }
    else
    {
        printf("\nthe string %s is not a polindrome",str);
    }

}