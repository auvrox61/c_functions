//Passing an array to a function

#include<stdio.h>

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size=5;
    printArray(numbers,size);
    return 0;
}