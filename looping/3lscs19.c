/*
A
BC
DEF
GHIJ
*/
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	char ch='A';
	while(i<=num){
		int j=1;
		while(j<=i){
			printf("%c",ch);
			ch++;
			j++;
		}
		printf("\n");
		i++;
	}
}
