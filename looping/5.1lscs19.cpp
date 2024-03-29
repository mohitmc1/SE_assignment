#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	while(i<=num){
		int space = num-i;
		while(space){
			printf(" ");
			space--;
		}
		int j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		j=1;
		if(i>=2){
			while(j<=i-1){
				printf("*");
				j++;
			}
		}
		printf("\n");
		i++;
	}
}
