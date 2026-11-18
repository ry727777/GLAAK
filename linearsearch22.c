#include<stdio.h>

int main(){
    // size of array
    int n;
    scanf("%d", &n);

    // Array created of size n
    int marks[n];
    // Input in array
    for(int i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }
    int number;
    scanf("%d", &number);
   
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for(int i=0; i<n; i++){
        if(marks[i] <0 ){
            negativeCount++;
        }else if(marks[i] >0 ){
            positiveCount++;
        }else{
            zeroCount++;
        }
    }
    printf("%d %d %d", positiveCount, negativeCount, zeroCount);
}