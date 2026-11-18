#include<stdio.h>

int main(){
	int num = 10;
	printf("%d\n",sizeof(num));
	
	int marks[] = {10,20,30,40,50};
	printf("%d\n",marks[0]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	int marks_size = sizeof(marks);
	printf("%d",marks_size);
	
	int length_array = sizeof(marks)/sizeof(marks[0]);
	printf("%d", length_array);
	
}


