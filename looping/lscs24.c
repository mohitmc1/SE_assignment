//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	while(i<num){
		printf("%d + ",i);
		i++;
	}
	if(i=num){
		printf("%d",i);
	}
}
