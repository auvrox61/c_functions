#include<stdio.h>

void spiralTraversal(int row,int col,int mat[row][col]){
    int top,bottom,left,right;
    top=0;
    bottom=row-1;
    left=0;
    right=col-1;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            printf("%d ",mat[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",mat[i][left]);
            }
            left++;
        }
    }
}

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Spiral Traversal Order : \n");
    spiralTraversal(r,c,mat);
    return 0;
}