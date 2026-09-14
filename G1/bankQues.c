#include<stdio.h>

int main(){
	int initial_bal;
	int deposit_amo;
	int withdraw_amo;
	
	scanf("%d%d%d",&initial_bal,&deposit_amo,&withdraw_amo);
	
	int final_balance = initial_bal + deposit_amo - withdraw_amo;
	printf("%d",final_balance);
}
