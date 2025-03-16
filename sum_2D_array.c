#include<stdio.h>

void scanMat(int r,int c,int mat[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

void displayMat(int r,int c,int mat[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int sumMat(int r,int c,int mat[r][c]){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=mat[i][j];
        }
    }
    return sum;
}

int  main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    scanMat(r,c,mat);
    displayMat(r,c,mat);
    int result= sumMat(r,c,mat);
    printf("%d",result);
    return 0;
}