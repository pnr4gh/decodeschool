#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],s[30];
	int i,j,k,b;
	fgets(str,50,stdin);
	fgets(s,50,stdin);
	for(i=0;i<=strlen(str)-strlen(s);i++)
	{
		j=0;
		b=0;

		if(str[i]==s[j])
		{
			for(k=i;j<=strlen(s)-1;k++,j++)
			{
				if(str[k]!=s[j])
				{	
					b=1;	
					break;
				}
			}
			if(b==0)
			{
				printf("Sub string is at %d",i);
				return 0;
			}
		}
	}
	printf("sub String not found");
	return 0;
}

	
