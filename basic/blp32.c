#include<stdio.h>
main()
{
	float a,b,sum;
	printf("enter a first number : ");
	scanf("%f",&a);
	printf("enter a second number : ");
	scanf("%f",&b);
	sum=a+b;
	printf("sum : %f",sum);
	int s = sizeof(sum);
	printf("\nsize of sum : %d",s);
}
