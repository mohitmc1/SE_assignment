/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
20. Unit 21. Charge/unit 
22. upto 350 23. @1.20 
24. 350 and above but less than 600 25. @1.50 
26. 600 and above but less than 800 27. @1.80 
28. 800 and above 29. @2.00*/
#include<stdio.h>
int main()
{
	int customerID,unit;
	double bill;
	char name;
    printf("enter the name : ");
    scanf("%ch",&name);
    printf("\nenter the customer id : ");
    scanf("%d",&customerID);
    printf("\nenter the unit : ");
    scanf("%d",&unit);
	if(unit<=350){
		bill=unit*1.20;
		printf("\nbill is %lf",bill);
	}else if(unit>350&&unit<600){
		bill=unit*1.50;
		printf("\nbill is %lf",bill);
	}else if(unit<=600&&unit<800){
		bill=unit*1.80;
		printf("\nbill is %lf",bill);
	}else{
		bill=unit*2.00;
		printf("\nbill is %lf",bill);
	}
	
}
