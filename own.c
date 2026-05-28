#include<stdio.h>
int main()

{
int voting;

scanf("%d",&voting);
if(voting>=18)
{
printf("eligible to vote");
}
else if(voting>0)
{
printf("not eligible to vote");
}



}