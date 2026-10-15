#include<stdio.h>

int main(){
	
   int num;
   scanf("%d",&num);
   
   int a = 2;
   int flag = 0;
   while(a < num){
   	if(num % a == 0){
   		printf("not prime");
   		flag = 1;
	   }
   }
   
   if(flag == 0){
   	printf("prime");
   }
	
}
