#include<stdio.h>

int main(){
    int m,n; 
    scanf("%d%d",&m,&n);

    int marks[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
}