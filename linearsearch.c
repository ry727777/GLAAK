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
    int number;
    scanf("%d", &number);

    int index = -1;

    for(int i=0; i<n; i++){
        if(number == marks[i]){
            index = i;
            break;
        }
    }

    printf("%d", index);


}