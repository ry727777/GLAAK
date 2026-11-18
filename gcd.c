#include<stdio.h>

int main(){
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	
	long long int i;
	long long int gcd = 1;
	for(i=1; i<=a; i++){
		if(a % i == 0 && b % i == 0){
			gcd = i;
		}
	}
	printf("%lld",gcd);
}



