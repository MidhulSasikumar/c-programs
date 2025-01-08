#include<stdio.h>
int main(){
	int num1,num2,num3,max;
	printf("Enter three numbers to check maximum :");
	scanf("%d%d%d",&num1,&num2,&num3);
//	1st logic
	printf("1st logic\n");
	if(num1>num2){
		if(num1>num3){
			printf("%d is the largest",num1);
		}
		else{
			printf("%d is the largest",num3);
		}
	}
	else{
		if(num2>num3){
			printf("%d is the largest",num2);
		}
		else{
			printf("%d is the largest",num3);
		}
	}
//	2nd logic
	printf("\n\n2nd logic\n");
	if(num1>num2)
		max=num1;
	else
		max=num2;
	if(num3>max)
		max=num3;
	printf("%d is the largest",max);
//	3rd logic
	printf("\n\n3rd logic\n");
	max = (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	printf("%d is the largest",max);
//	4th logic
	printf("\n\n4th logic\n");
	max = num1;
	if(num2>max)
		max=num2;
	if(num3>max)
		max=num3;
	printf("%d is the largest",max);
	return 0;
}
