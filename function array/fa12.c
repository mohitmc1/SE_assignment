#include<stdio.h>
int main(){
	int num[5],i;
	for(i=0;i<=4;i++){
		printf("\nenter the number : ");
		scanf("%d",&num[i]);
		if(num[i]%2==0){
			printf("\n%d is even\n",num[i]);
		}else{
			printf("\n%d is odd\n",num[i]);
		}
	}
}
