//Call by reference

#include<stdio.h>

void modifyValue(int *a,int *b){
    *a=15;
    *b=25;
}

int main(){
    int x=10;
    int y=20;
    printf("x : %d , y : %d\n",x,y);
    modifyValue(&x,&y);
    printf("After calling by reference : \n");
    printf("x : %d , y : %d",x,y);
    return 0;
}