// WAP to check if the given year is a leap year or not. 
#include<stdio.h>
int main()
{
	int year;
	printf("eneter a year : ");
	scanf("%d",&year);
	if(year%4)
	{
		printf("not leap year\n");
	}else if(year%100){
		printf("leap year\n");
	}else if(year%400){
		printf("not leap year\n");
	}else{
		printf("leap year");
	}
}
