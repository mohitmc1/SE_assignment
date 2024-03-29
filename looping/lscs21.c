/*20. WAP program to print below output using for loop 
01 02 03 04 05 06 07 08 09 10 
11 12 13 14 15 16 17 18 19 20 
.............. 
.............. 
41 42 43 44 45 46 47 48 49 50*/
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int count=1;
	int i;
	for(i=1;i<=num;i++){
		int j;
		for(j=1;j<=10;j++){
			printf(" %d",count);
			count++;
		}
		printf("\n");
	}
	
}
