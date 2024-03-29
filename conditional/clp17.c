/* Write a C program to check whether a triangle can be formed with the given 
values for the angles. */
#include<stdio.h>
int main()
{
	int anga,angb,angc,sum;
	printf("enter the first angle : ");
	scanf("%d",&anga);
	printf("enter the second angle : ");
	scanf("%d",&angb);
	printf("enter the third angle : ");
	scanf("%d",&angc);
	sum=anga+angb+angc;
	if(sum==180){
		printf("triagle can be formed");
	}else{
		printf("triangle can not be formed");
	}
	
}
