#include<stdio.h>
int main()
{
	int wages;
	double days,basic,HRA,DA,PF,netsalary;
	printf("Enter daily wages and number of days worked:");
	scanf("%d %lf",&wages,&days);
	basic=wages*days;
	HRA=basic*0.1;
	DA=basic*0.05;
	PF=basic*0.12;  
	netsalary=basic+HRA+DA-PF;
	printf("\nBasic:%lf \nHRA:%lf \nDA:%lf \nPF:%lf \nNet Salary:%lf",basic,HRA,DA,PF,netsalary);
	return 0;  

}