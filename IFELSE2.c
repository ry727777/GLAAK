#include<stdio.h>

int main(){
	printf("Enter price: ");
	float price;
	scanf("%f",&price);
	
	if(price >= 2000){
		// 10% discount
		price = price - price*0.1;
	}
	
	printf("Final Amount: %.2f", price);
}
