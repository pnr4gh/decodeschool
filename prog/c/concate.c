#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[50],str2[50];
	int i,j=0;
	fgets(str1,50,stdin);
	fgets(str2,50,stdin);
	
		
	for(i=0;i<strlen(str1)-1;i++,j++)
	{
		str[j]=str1[i];
	}

	for(i=0;i<strlen(str2)-1;i++,j++)
	{
		str[j]=str2[i];
	}
	printf("%s",str);
	return 0;
}

	
