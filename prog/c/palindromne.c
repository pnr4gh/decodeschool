#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50],temp;
	int i = 0;
	int j;
	fgets(str,50,stdin);
	j = strlen(str) - 1;
	while(i<=j)
	{
		str1[j]=str[i];
		str1[i]=str[j];
		i++;
		j--;
	}
	printf("\n%s\n",str1);
	i=0;
	while(str[i]!='\0' && str[i]!='\n')
	{
		if(str[i]!=str1[i])
		{
			printf("Not palindromne");
			return 0;
		}
		i++;
	}
	printf("Palindronme");
	return 0;
}