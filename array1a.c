#include<stdio.h>


int main(){
	
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int marks[n];
	
	int i;
	printf("Enter value in array: ");
	for(i=0; i<n; i++){
		scanf("%d", &marks[i]);
	}
	
	int j;
	printf("Elements inn array: ");
	for(j=0; j<n; j++){
		printf("%d ", marks[j]);
	}
}
