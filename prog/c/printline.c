//Program to print the given word
#include<stdio.h>
int main()
{
	char msg[50];
	scanf("%[^\t]s",&msg); 	
	printf("%s",msg);	
	return  0;
}