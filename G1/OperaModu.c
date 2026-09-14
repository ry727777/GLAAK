#include<stdio.h>

int main(){
	int number;
	printf("Number: ");
	scanf("%d",&number);
	int hundreds = number/100;
	int tens = (number % 100)/10;
	int ones = (number % 100)%10;
	printf("Hundreds: %d\n",hundreds);
	printf("Tens: %d\n", tens);
	printf("Ones: %d",ones);
	
}
