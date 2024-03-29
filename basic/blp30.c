#include<stdio.h>
main()
{
	float years,days;
	printf("enter days : ");
	scanf("%f",&days);
	years=days/365;
	printf("\nyears : %f",years);
	printf("\nenter years : ");
	scanf("%f",&years);
	days=years*365;
	printf("\ndays : %f",days);
	
}
