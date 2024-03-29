/*3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers */
#include<stdio.h>
int main(){
	int i,num[10],even_sum=0,odd_sum=0,count_even=0,count_odd=0;
	for(i=0;i<10;i++){
	printf("enter the number %d : ",i+1);
	scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
    	if(num[i]%2==0){
    	even_sum=even_sum+num[i];
    	count_even++;
    }
	}
    for(i=0;i<10;i++){
    	if(num[i]%2!=0){
    		odd_sum=odd_sum+num[i];
    		count_odd++;
		}
	}
	printf("\na. number of even number : %d",count_even);
	printf("\nb. number of odd number : %d",count_odd);
	printf("\nc. the sum of even number : %d",even_sum);
	printf("\nd. the sum of odd number : %d",odd_sum);
}
