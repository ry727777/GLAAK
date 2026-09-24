#include<stdio.h>

int main(){
	int a = 10;
	int b = 20;
	
	int c = a > 5 && b < 25;
	printf("%d\n",c);
	int d = !(a < 2 || b >25);
	printf("%d\n",d);
}
