//33. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	int week,days;
	printf("enter the number of week : ");
	scanf("%d",&week);
	days=7*week;
	printf("number of days : %d",days);
}
