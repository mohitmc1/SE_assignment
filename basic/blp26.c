#include<stdio.h>
int main()
{
	float F,C;
	printf("enter a temperature fahrenheit : ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("temperature celcius : %f",C);
}
