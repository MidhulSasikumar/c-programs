#include<stdio.h>
int main(){
	int a[3][3],i,j, n=0, m=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==0){
				n++;
			}
		}
	}
	if(n>(i+j)/2){
		printf("It is spartz matrix\n\n");
		printf("Coloumn major :\n");
		printf("Row col  val\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					printf("%d    %d    %d",i,j,a[i][j]);
					printf("\n");
				}
				
			}
		}
		printf("Row major :\n");
		printf("Row\t");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					printf("%d\t",i);
				}
			}
		}
		printf("\n");
		printf("col\t");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					printf("%d\t",j);
				}
			}
		}
		printf("\n");
		printf("val\t");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					printf("%d\t",a[i][j]);
				}
			}
		}
	}
	else{
		printf("it is not spartz matrix");
	}
	return 0;
}
