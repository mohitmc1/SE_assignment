/*6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.*/
#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string : ");
	gets(str);
	int i=0,alphabets=0,digits=0,special=0;
	while(str[i]!='\0'){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			alphabets++;
		}else if(str[i]>='0'&&str[i]<='9'){
			digits++;
		}else{
			special++;
		}
		i++;
	}
	printf("\nnumber of alphabets : %d",alphabets);
	printf("\nnumber of digits : %d",digits);
	printf("\nnumber of special charcaters : %d",special);
}
