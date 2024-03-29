/* 
1
10
101
1010
10101
*/
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	while(i<=num){
		int j=1;
		while(j<=i){
			if(j%2==0){
				printf("0");
			}else{
				printf("1");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
