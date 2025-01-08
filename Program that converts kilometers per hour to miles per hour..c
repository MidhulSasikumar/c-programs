#include<stdio.h>
int main(){
	float kph,mph;
	printf("Enter the speed in kilometers per hour :");
	scanf("%f",&kph);
	mph=(kph*0.621371);
	printf("Speed in miles per hour = %.2f mph",mph);
	return 0;
}
