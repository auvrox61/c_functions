//Function Definition and Function Call 

#include<stdio.h>

int add(int x,int y){
    return x+y;
}

int main(){
    int sum,x,y;
    printf("Enter the first integer : ");
    scanf("%d",&x);
    printf("Enter the second integer : ");
    scanf("%d",&y);
    sum=add(x,y);
    printf("The summation of the integers are %d",sum);
    return 0;
}