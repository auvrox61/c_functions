//Write a function that returns the second largest element in an array.

#include<stdio.h>
#include<limits.h>

int second_largest(int arr[],int n){
    int largest=INT_MIN;
    int Slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            Slargest=largest;
            largest=arr[i];
        }
    }
    return Slargest;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=second_largest(arr,n);
    printf("%d\n",result);
    return 0;
}