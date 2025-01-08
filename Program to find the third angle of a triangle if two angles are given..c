#include<stdio.h>
int main(){
	int a1,a2,a3;
	printf("Enter the two angles :");
	scanf("%d%d",&a1,&a2);
	a3=180-(a1+a2);
	printf("The third angle is %d",a3);
	return 0;
}
