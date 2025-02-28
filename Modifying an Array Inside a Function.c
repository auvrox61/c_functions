//Modifying an Array Inside a Function

#include<stdio.h>

void modifyArray(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]*=2;
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    modifyArray(arr,size);
    return 0;
}