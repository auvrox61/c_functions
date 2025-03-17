#include<stdio.h>
#define size 3

int isSymmetric(int matrix[size][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(matrix[i][j]!=matrix[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int matrix[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    if(isSymmetric(matrix)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}