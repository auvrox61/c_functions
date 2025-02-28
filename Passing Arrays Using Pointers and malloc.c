//Passing Arrays Using Pointers and malloc

#include<stdio.h>
#include<stdlib.h>

void fillArray(int *arr, int size){
    for(int i=0;i<size;i++){
        arr[i]=i*10;
    }
}

int main(){
    int size=5;
    int *arr=(int *)malloc(size*sizeof(int));
    fillArray(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}