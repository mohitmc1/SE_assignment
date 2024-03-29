/*17. Calculate 5 numbers from user and calculate number of even and odd using 
of while loop*/
#include<stdio.h>
int main(){
	int num,count=0,even=0,odd=0;
	while(count<=4){
		printf("enter the number : ");
		scanf("%d",&num);
		if(num%2==0){
			even++;
		}
		else{
			odd++;
		}
		count++;
	}
	printf("number of even no : %d     number of odd no : %d",even,odd);
}
