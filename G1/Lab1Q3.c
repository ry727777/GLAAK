#include<stdio.h>

int main(){
	int product_id = 101;
	char product_name = 'L';
	float price = 499.56;
	
	printf("Product ID\t: %d\n",product_id);
	printf("Product Code\t: %c\n", product_name);
	printf("Price\t\t: %.2f\n",price);
	
	int count = printf("Hello World\n");
	printf("%d", count);
}
