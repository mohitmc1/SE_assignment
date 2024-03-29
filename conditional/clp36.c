/*36. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main(){
	float total_bill,unit,rate1=0.50,rate2=0.75,rate3=1.20,rate4=1.50,bill;
	printf("enter your electricity unit charges : ");
	scanf("%f",&unit);
	if(unit<0){
		printf("invalid\n");
	}else{
		if(unit<=50){
			bill=unit*rate1;
		}else if(unit<=150){
			bill=50*rate1+(unit-50)*rate2;
		}else if(unit<=250){
			bill=50*rate1+100*rate2+(unit-150)*rate3;
		}else{
			bill=50*rate1+100*rate2+100*rate3+(unit-250)*rate4;
		}
	}
	total_bill=0.2*bill+bill;
	printf("total bill is : %.2f",total_bill);
}
