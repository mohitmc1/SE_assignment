//3. WAP to find reverse of string using recursion
#include<stdio.h>
void reverseString(char st[],int start,int end){
	if(start>=end){
		return;
	}
	char temp=st[start];
	st[start]=st[end];
	st[end]=temp;
	reverseString(st,start+1,end-1);
}
int main(){
	char str[100];
	printf("enter the word : ");
	scanf("%s",str);
	int len=strlen(str);
	reverseString(str,0,len-1);
	printf("\nreverse of string : %s",str);
}
