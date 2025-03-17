#include<stdio.h>
#include<limits.h>

int findMax(int mat[][3],int rows){
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    return max;
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
    int maximum=findMax(mat,n);
    printf("%d\n",maximum);
    return 0;
}
