#include<stdio.h>

int main(){
	int roll_num;
	char initial;
	float marks;
	
	printf("Input: ");
	scanf("%d",&roll_num);
	scanf(" %c",&initial);
	scanf("%f",&marks);
	
	printf("Roll no: %d | Initial: %c | Marks: %.2f",roll_num,initial,marks);
	
	return 0;
}
