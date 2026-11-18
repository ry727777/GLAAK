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

    int sum = 0;
    // sum of all elements;
    for(int i=0; i<n; i++){
        sum += marks[i];
    }

    printf("%d", sum);
}