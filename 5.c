#include <stdio.h>
int main() {
    FILE *f1,*f2,*f3;
    int number,i;

    printf("contents of DATA file\n\n ");
    f1 = fopen("data","w");             /* create data file */

    for(i=1;i<=30;i++)
    {
        scanf("%d",&number);
        if(number == -1)break;

        putw(number,f1);

    }
    fclose(f1);

    f1 = fopen("data","r");
    f2 = fopen("odd","w");
    f3 = fopen("even","w");

    /* read from FILE data */

    while((number=getw(f1)) !=EOF)
    {
        if(number %2 ==0)
        {
            putw(number,f3);  /* write a even FILE */
        }
        else
        {
            putw(number,f2);  /* write a odd file  */
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2=fopen("odd","r");
    f2=fopen("even","r");

    printf("\n\ncontents of odd file \n\n");

    while((number =getw(f2)) !=EOF)
    {
        printf("%4d",number);
        printf("\n\ncontents of even file \n\n");
    }
    while((number=getw(f3)) !=EOF)
    {
        printf("%d",number);

    } 
    fclose(f2);
    fclose(f3);

}