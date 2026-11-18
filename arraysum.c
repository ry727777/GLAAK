#include<stdio.h>

int main(){
    // size of array
    int n;
    scanf("%d", &n);
    // array created of size n
    int marks[n];
    // input in array
    for(int i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }


    // sum of all elements
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += marks[i];
    }

    printf("%d", sum);


}