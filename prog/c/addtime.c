#include<stdio.h>
struct time{
	int hour;
	int min;
};

int main()
{
	struct time t1,t2,t3;
	printf("Enter First time:");
	scanf("%d:%d",&t1.hour,&t1.min);
	printf("Enter second time:");
	scanf("%d:%d",&t2.hour,&t2.min);
	t3.hour=t1.hour+t2.hour;
	t3.min=t1.min+t2.min;
	if(t3.min>59)
	{
		t3.hour++;
		t3.min=t3.min-60;
	}
	printf("%d:%d",t3.hour,t3.min);
	return 0;
}