#include<stdio.h>
#include<ctype.h>
int main()
{
	/* scanning characters */
	char A;
	
	printf("enter a character :");
	
	scanf("%c",&A);
	
	printf("you entered %c",toupper(A));
	
	/* 2 method for char scanning */
	
	char B;
	
	printf("\n");
	
	printf("type another character\n");
	
	getchar();
	
	B=getchar();
	
	putchar(B);	
	
}
