#include<stdio.h>
int main()
{
	int f,l,n,s;
	printf("Enter a number  :");
	scanf("%d",&n);
	l=n%10;
	while(n>10)
	{
		n=n/10;
		
	}
	printf("sum of 1st and last digit = %d",n+l);
	return 0;	
}
