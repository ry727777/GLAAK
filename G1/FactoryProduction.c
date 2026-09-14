#include<stdio.h>

int main(){
	long long Previously_produced_items;
	long long Number_of_machines;
	long long Items_produced_one_machine_day;
	long long Number_of_working_days;
	scanf("%lld%lld%lld%lld",&Previously_produced_items,&Number_of_machines,&Items_produced_one_machine_day
	,&Number_of_working_days);
	
	long long production_by_one_machi = Items_produced_one_machine_day * Number_of_working_days;
	long long production_all_machin = production_by_one_machi * Number_of_machines;
	long long total_production = production_all_machin + Previously_produced_items;
	
	printf("Production by One Machine = %d\n",production_by_one_machi);
	printf("Production by All Machine = %d\n",production_all_machin);
	printf("Total Production = %d",total_production);
}
