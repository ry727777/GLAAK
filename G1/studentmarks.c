#include<stdio.h>

int main(){
    int m,n; 
    scanf("%d%d",&m,&n);

    int marks[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &marks[i][j]);
        }
    }


    // Result
    float total_per = 0.0;
    for(int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += marks[i][j];
        }
        total_per += (sum * 100.0)/40.0;
    }
    printf("Average %.2f",total_per/m);

}