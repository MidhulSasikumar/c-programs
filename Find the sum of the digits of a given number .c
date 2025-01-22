#include<stdio.h>
int main(){
	int num,sum=0,i=1,og_num;
	printf("Enter the number :");
	scanf("%d",&num);
	og_num=num;
	while(num>0){
		sum+=(num%10);
		num/=10;
	}
	printf("Sum of the digits of %d = %d",og_num,sum);
	return 0;
}
