#include<stdio.h>

int occurence(int mat[][3],int rows,int num){
    int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==num){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n,num;
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
    printf("Enter the number to be counted : \n");
    scanf("%d",&num);
    int result=occurence(mat,n,num);
    printf("%d\n",result);
    return 0;
}