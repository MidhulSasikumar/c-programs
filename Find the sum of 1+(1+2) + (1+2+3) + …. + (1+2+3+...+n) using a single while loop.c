#include<stdio.h>
int main(){
	int num,i=1,sum=0,p_sum=0;
	printf("Enter the number :");
	scanf("%d",&num);
	while(i<=num){
		p_sum=p_sum+i;
		sum=p_sum+sum;
		i++;
	}
	printf("%d",sum);
	return 0;
}
