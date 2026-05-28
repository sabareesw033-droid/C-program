#include <stdio.h>
int main() {
    int *num,*freq,i,size;

    printf("\nenter the size of the list :");
    scanf("%d",&size);

    num=(int*)malloc(size* sizeof(int));
    printf("\nenter the numbers: ");
    for(i=0;i<size;i++)
    {
        printf("\nenter num[%d] :",i);
        scanf("%d",&num[i]);  
    }
    if(num[0]<0  || num[i]>4)
    {
        printf("\nnumber should be within range (0-4)");
        i--;
        continue;
    }


    freq =(int*)calloc(5,sizeof(int));
    for(i=0;i<size;i++){
    
        freq[num[i]]++;
        printf("\nthe frequencies of the number :");}
        for(i=0;i<5;i++){
        printf("\nfreq[%d]=%d",i,freq[i]);
        }}