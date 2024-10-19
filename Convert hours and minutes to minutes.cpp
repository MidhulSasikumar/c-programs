#include<stdio.h>
int main()
{
	int h,m,t;
	printf("enter the hour and minutes : ");
	scanf("%d%d",&h,&m);
	h=h*60;
	t=h+m;
	printf("total minutes = %d",t);
	return 0;
}
