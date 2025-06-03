#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],temp;
	int i = 0;
	int j;
	fgets(str,50,stdin);
	j = strlen(str) - 1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("%s",str);
	return 0;
}