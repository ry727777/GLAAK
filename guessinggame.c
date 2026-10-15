#include<stdio.h>

int main(){
	int secret = 9;
	int attempt = 0;
	int num;
	do{
		attempt++;
		printf("Guess No: ");
		scanf("%d", &num);
		if(num < secret){
			printf("Too low\n");
		}else if(num > secret){
			printf("Too high\n");
		}
	}while(num != secret);
	
	printf("Total attempt %d",attempt);
}
