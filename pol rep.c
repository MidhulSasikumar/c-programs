#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the laegest exp :");
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n+1;i++){
		printf("Entert the element eith %d exp :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n+1;i++){
		printf("%dx^%d",a[i],i);
		if(i<n){
			printf("+");
		}
	}
	return 0;
}
