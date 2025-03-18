//Write a function that takes an integer and returns its reversed number

#include<stdio.h>

int revNum(int n){
    int rev=0;
    int digit;
    while(n>0){
        digit=n%10;
        rev=(rev*10)+digit;
        n/=10;
    }
    return rev;
}

int main(){
    int n;
    scanf("%d",&n);
    int result=revNum(n);
    printf("%d\n",result);
    return 0;
}