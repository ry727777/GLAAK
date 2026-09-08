#include<stdio.h>

int main(){
	// variables
	int roll_no = 11;
	float subject1 = 85.50;
	float subject2 = 90.00;
	float subject3 = 78.25;
	char grade = 'A';
	
	printf("-------- REPORT CARD --------\n");
	printf("Roll Number\t: %d\n", roll_no);
	printf("Subject 1\t: %.2f\n", subject1);
	printf("Subject 2\t: %.2f\n", subject2);
	printf("Subject 3\t: %.2f\n", subject3);
	float total_marks = subject1 + subject2 + subject3;
	float av_marks = total_marks / 3;
	float percen = (total_marks/300)*100;
	printf("Average\t: %.2f\n", av_marks);
	printf("Total Marks\t: %.2f\n", total_marks);
	printf("Percentage\t: %.2f\n",percen);
	
	printf("Grade\t\t: %c\n",grade);
	printf("------------------------------");	
	
}
