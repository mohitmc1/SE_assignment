/*16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot */
#include<stdio.h>
int main(){
	int temp;
	printf("enter the temperature : ");
	scanf("%d",&temp);
	if(temp<0){
		printf("\nfreezing weather");
	}else if(0<temp && temp<10){
		printf("\nvery cold weather");
	}else if(10<temp&&temp<20){
		printf("\ncold weather");
	}else if(20<temp&&temp<30){
		printf("\nnormal in temperature");
	}else if(30<temp&&temp<40){
		printf("\nits hot");
	}else{
		printf("\nits very hot");
	}
}
