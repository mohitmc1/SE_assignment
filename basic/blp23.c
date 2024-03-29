//WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
main()
{
	float num1,num2;
	printf("enter a first number : ");
	scanf("%f",&num1);
	printf("enter a second number : ");
	scanf("%f",&num2);
	num1 = num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	printf("swapped numbers : %f %f",num1,num2);
	

}
