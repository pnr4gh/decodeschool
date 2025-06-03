#include<stdio.h>
struct length{
	int feet;
	int inch;
};

int main()
{
	struct length l1,l2,l3;
	printf("Enter First Length:");
	scanf("%d:%d",&l1.feet,&l1.inch);
	printf("Enter second Length:");
	scanf("%d:%d",&l2.feet,&l2.inch);
	l3.inch=l1.inch+l2.inch;
	l3.feet=l1.feet+l2.feet;
	if(l3.inch>11)
	{
		l3.feet++;
		l3.inch=l3.inch-12;
	}
	printf("%d:%d",l3.feet,l3.inch);
	return 0;
}