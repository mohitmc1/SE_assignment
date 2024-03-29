#include<stdio.h>
main()
{
	int h,w,l,area;
	printf("enter height of rectangular prism : ");
	scanf("%d",&h);
	printf("enter width of rectangular prism : ");
	scanf("%d",&w);
	printf("enter length of rectangular prism : ");
	scanf("%d",&l);
	area=2*(w*l+h*l+h*w);
	printf("area of rectangular prism : %d",area);
}
