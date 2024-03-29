#include<stdio.h>
main()
{
	float seconds,minutes,hours;
	printf("enter minutes : ");
	scanf("%f",&minutes);
	seconds=minutes*60;
	hours=minutes/60;
	printf("second : %f hours : %f",seconds,hours);
	
}
