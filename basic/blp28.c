#include<stdio.h>
main()
{
	float year, days, months;
	printf("enter years : ");
	scanf("%f",&year);
	months=year*12;
	days=year*365;
	printf("months : %f days : %f",months,days);
}
