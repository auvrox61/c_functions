// Write a program in C to check whether a number is a prime number or not

#include<stdio.h>

int main(){
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    int isPrime=1;
    if(n<=1){
        isPrime=0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=0;
        } else{
            isPrime=1;
        }
    }
    if(isPrime){
        printf("This is a prime number\n");
    } else{
        printf("This is not a prime number\n");
    }
    return 0;
}