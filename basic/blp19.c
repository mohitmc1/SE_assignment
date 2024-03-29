#include<stdio.h>
#include<math.h>
main()
{
	// A = P*(1+r/n)^(nt)
	double p,r,n,t,A;
	printf("enter your initial pricipal amount : ");
	scanf("%lf",&p);
	printf("enter your anual interest rate : ");
	scanf("%lf",&r);
	printf("enter number of time interest is compounded : ");
	scanf("%lf",&n);
	printf("enter number of years : ");
	scanf("%lf",&t);
	A=p*pow(1+r/n,n*t)-p;
	printf("compound interest : %lf",A);
	
	 

}
