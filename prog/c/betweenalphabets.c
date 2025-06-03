#include<stdio.h>
int main()
{
	int i;
	char start,stop;
	printf("enter two alphabets:");
	scanf("%c %c",&start,&stop);
	for(i=start;i<=stop;i++)
	{
		printf("%c",i);
	}
	return 0;
}