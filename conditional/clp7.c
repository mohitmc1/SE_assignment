//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	double marks;
	printf("enter a marks : ");
	scanf("%lf",&marks);
	if(marks>=33){
		printf("congratulations! you are passed");
	}else{
		printf("you are fail");
	}
}
