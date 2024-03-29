#include<stdio.h>
int main()
{
    float salary,remainingSalary,insurancePremium,loanInstallment;
	printf("enter your monthly salary");
	scanf("%f",&salary);
	insurancePremium = 0.1*salary;
	loanInstallment = 0.1*salary;
	remainingSalary = salary-insurancePremium-loanInstallment;
	printf("remaining salary : %f",remainingSalary);
	
	return 0;
}
