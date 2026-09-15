#include<stdio.h>

int main(){
	int initial_score;
	int points_earned;
	int points_lost;
	int level = 0;
	
	scanf("%d%d%d", &initial_score, &points_earned, &points_lost);
	int final_score = initial_score + points_earned - points_lost;
	printf("Final Score = %d\n",final_score);
	printf("Completed Levels = %d\n",++level);
}
