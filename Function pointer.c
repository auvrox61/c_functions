//Function Pointers

#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int compute(int a,int b,int (*operation)(int,int)){
    return operation(a,b);
}

int main(){
    int choice;
    printf("Enter 1 for addition and 2 for subtraction\n");
    scanf("%d",&choice);
    int (*op)(int,int)=(choice==1)?add:subtract;
    printf("%d",compute(10,12,op));
    return 0;
}