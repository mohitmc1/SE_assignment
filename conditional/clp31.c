/*Write a program in C to read any Month Number in integer and display the 
number of days for this month.*/
#include<stdio.h>
int main(){
	int month,days;
	printf("enter a month number : ");
	scanf("%d",&month);
	switch (month){
		case 1:
			days=31;
			break;
		case 2:
			days=28;
			break;
		case 3:
			days=31;
			break;
		case 4:
			days=30;
			break;
		case 5:
			days=31;
			break;
		case 6:
			days=30;
			break;
		case 7:
			days=31;
			break;
		case 8:
			days=31;
			break;
		case 9:
			days=30;
			break;
		case 10:
			days=31;
			break;
		case 11:
			days=30;
			break;
		case 12:
			days=31;
			break;
	}
	printf("the number of days in month %d : %d",month,days);
}
