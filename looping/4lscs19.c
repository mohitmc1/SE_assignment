/*
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main(){
	int num;
	printf("enter the  number : ");
	scanf("%d",&num);
	int i=1;
	while(i<=num){
		int j=1;
		while(j<=i){
			char ch='A'+j-1;
			printf("%c",ch);
			j++;
		}
		printf("\n");
		i++;
	}
}
