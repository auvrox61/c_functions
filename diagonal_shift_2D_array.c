#include<stdio.h>

void diagShift(int mat[][3],int rows){
    for(int i=0;i<rows;i+=2){
        int temp=mat[i][0];
        mat[i][0]=mat[i][2];
        mat[i][2]=temp;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int mat[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    diagShift(mat,n);
    printf("After Diagonal Shift : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}