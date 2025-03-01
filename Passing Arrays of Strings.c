// Passing Arrays of Strings

#include<stdio.h>

void printString(char *arr[],int size){
    for(int i=0;i<size;i++){
        printf("%s ",arr[i]);
    }
}

int main(){
    char *arr[]={"Bangladesh","India","New Zealand","Pakistan"};
    int size=sizeof(arr)/sizeof(arr[0]);
    printString(arr,size);
    return 0;
}