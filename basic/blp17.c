#include<stdio.h>
main()
{
	/*
	Insurance Premium = (Salary×Premium Percentage)/100
	*/
	float salary, premiumPercentage;
	printf("enter your salary : ");
	scanf("%f",&salary);
	printf("enter your premium percentage : ");
	scanf("%f",&premiumPercentage);
	if(salary<0 || premiumPercentage<0)
	{
		printf("invalid input. salary and premium percentage must not be zero");
	}
	float insurancePremium = (salary*premiumPercentage)/100;
	printf("person’s insurance premium : %f",insurancePremium);
}
