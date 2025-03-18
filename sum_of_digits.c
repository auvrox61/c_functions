//Write a function that takes an integer and returns the sum of its digits.

#include<stdio.h>

int sum_of_digits(int n){
    int sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int result=sum_of_digits(n);
    printf("%d\n",result);
    return 0;
}