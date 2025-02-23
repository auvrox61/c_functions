// Write a C program to calculate the sum or product of an array of integers using a callback function.
//w3r_callbackFunctions_3

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    printf("Sum and product of the array is %d and %d",sum,product);
    return 0;
}