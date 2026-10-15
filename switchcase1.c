#include<stdio.h>

int main(){
	
	printf("Enter you choice: ");
	int choice;
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Order Pizza\n");
			break;
		case 2:
			printf("Order Burger\n");
			break;
		case 3:
			printf("Order Cold drink\n");
			break;
		case 4:
			printf("Order Water\n");
			break;
		default:
			printf("Invalid Order\n");
	}
}
