#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the degree of both polinomial :");
	scanf("%d %d",&n,&m);
	int a[n+1],b[m+1],result[m+n+1];
	for(i=0;i<=m+n;i++){
		result[i]=0;
	}
	printf("1st polynomial\n");
	for(i=0;i<=n;i++){
		printf("Enter the element of %d exponential :",i);
		scanf("%d",&a[i]);
	}
	printf("2nd polynomial\n");
	for(i=0;i<=m;i++){
		printf("Enter the element of %d exponential :",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<=n;i++){
			for(j=0;j<=m;j++){
				result[i+j]+=a[i]*b[j];
			}
		}
	for(i=0;i<=n+m;i++){
		printf("%dx%d",result[i],i);
		if(i!=m+n){
			printf("+");
		}
	}
	return 0;
	
}
