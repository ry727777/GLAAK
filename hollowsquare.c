#include<stdio.h>

int main(){
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==1 || j==1 || i==n || j == n || i==j || i+j == n+1){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");	
		
	}
}
