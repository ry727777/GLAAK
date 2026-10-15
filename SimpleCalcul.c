#include<stdio.h>

int main(){
	printf("Enter two number: ");
	int num1, num2;
	scanf("%d%d",&num1,&num2);
	printf("Choice (+,-,*,/): ");
	char choice;
	scanf(" %c",&choice);
	
	switch(choice){
		case '+':
			printf("%d",num1+num2);
			break;
		case '-':
			printf("%d",num1-num2);
			break;
		case '*':
			printf("%d",num1*num2);
			break;
		case '/':
			printf("%d",num1/num2);
			break;
		default:
			printf("Invalid Operation");
	}
}






