/*6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array */
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],i,j;
	printf("enter the 9 numbers for first matrix : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the 9 numbers for second matrix : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\naddition of two matrix : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\nsubtraction of two matrix : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			d[i][j]=a[i][j]-b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	printf("\nmultiplication of two matrix : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			e[i][j]=a[i][j]*b[i][j];
			printf("%d ",e[i][j]);
		}
		printf("\n");
	}
}
