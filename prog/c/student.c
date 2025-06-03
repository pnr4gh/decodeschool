#include<stdio.h>
struct student
{
	char name[50];
	int m1,m2,m3,m4,m5,sum;
	float avg;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i].name);
		scanf("%d %d %d %d %d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
		s[i].sum=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
		s[i].avg=s[i].sum/5;
	}
	for(i=0;i<n;i++)
	{
		printf("Name: %s\nSum: %d\nAverage:%f\n",s[i].name,s[i].sum,s[i].avg);
	}

}
