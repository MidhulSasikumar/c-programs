#include<stdio.h>
int main(){
	int i,n,m;
	printf("Enter the laegest exp of two :");
	scanf("%d%d",&n,&m);
	int a[n+1],b[m+1];
	for(i=0;i<n+1;i++){
		printf("Entert the element eith %d exp :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<m+1;i++){
		printf("Entert the element eith %d exp :",i);
		scanf("%d",&b[i]);
	}
	m=(m>=n)?m:n;
	int result[m];
	for(i=0;i<m+1;i++){
		result[i]=a[i]+b[i];
	}
	for(i=0;i<m+1;i++){
		printf("%dx^%d",result[i],i);
		if(i<m){
			printf("+");
		}
	}
	return 0;
}
