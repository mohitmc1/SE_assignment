//WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main()
{
	double num1,num2,result;
	char sign;
	printf("enter a operator(+,-,*,/,%) : ");
	scanf("%c",&sign);
		printf("enter a num1 : ");
	scanf("%lf",&num1);
	printf("enter a num2 : ");
	scanf("%lf",&num2);
	switch(sign) {
	case('+') :
		result = num1+num2;
		break;
	case('-') :
		result = num1-num2;
		break;
	case('*') :
	    result = num1*num2;
		break;
	case('/') :
	    result = num1/num2;
		break;
	case('%') :
		result = (int)num1 % (int)num2;
		break;
}
	printf("result : %.2lf",result);
}
