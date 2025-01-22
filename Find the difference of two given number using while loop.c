#include<stdio.h>
int main(){
	int num1,num2,diff,og_num1,og_num2;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	diff=0;
	og_num1=num1;
	og_num2=num2;
	if(num1<=num2){
		while(num1<num2){
			diff--;
			num1++;
		}
	}
	else{
		while(num1>num2){
			diff++;
			num1--;
		}
	}
	printf("Difference of %d and %d is %d",og_num1,og_num2,diff);
	return 0;
}
