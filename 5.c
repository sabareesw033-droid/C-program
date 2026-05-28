#include <stdio.h>
#include <string.h>


int main() {

    char s1[],s2[],s3;

    int x,l1,l2,l3;


    printf("\n\nenter two string constants \n");

    printf("?");

    scanf("%s %s ",s1,s2);

    /* comparing s1,s2 */

    x = strcmp(s1,s2);

    if(x !=0)
    {
        printf("\n\nstring are not equal \n");
        strcat(s1,s2); /*joining s1,s2 */
    }
    else
    printf("\n\nstirng are equal\n");
    /* coping s1 to s3 */
        strcpy(s3,s1);
    /* finding length of string */
        l1=strlen(s1);
        l2=strlen(s2);
        l3=strlen(s3);

        /* output */


    
    
}