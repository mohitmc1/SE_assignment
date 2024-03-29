/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
main()
{
	double compoundInterest,amount,p,r,t;
	printf("enter your initial pricipal amount : ");
	scanf("%lf",&p);
	printf("enter your anual interest rate : ");
	scanf("%lf",&r);
	printf("enter number of years : ");
	scanf("%lf",&t);
	amount=p*pow(1+r/100,t);
	compoundInterest=amount-p;
	printf("amount : %d",amount);
	printf("compound interest : %d",compoundInterest);
	
	
}
