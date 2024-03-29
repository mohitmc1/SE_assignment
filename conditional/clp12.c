// WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	printf("enter third number : ");
	scanf("%d",&num3);
	(num1>num2&&num1>num3)? printf("%d",num1) : (num2>num3) ? printf("%d",num2) : printf("%d",num3);

}
