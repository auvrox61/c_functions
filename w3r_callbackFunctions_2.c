// Write C program to sort an array of integers in ascending or descending order using a callback function to compare the elements.
//w3r_callbackFunctions_2

#include<stdio.h>
#include<stdlib.h>

int ascending(const void *a,const void *b){
    int *intPointerA=(const int*)a;
    int *intPointerB=(const int*)b;
    int intA=*intPointerA;
    int intB=*intPointerB;
    return intA-intB;
}

int descending(const void *c,const void *d){
    int *intPointerC=(const int*)c;
    int *intPointerD=(const int*)d;
    int intC=*intPointerC;
    int intD=*intPointerD;
    return intD-intC;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),ascending);
    printf("Array in Ascending Order : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    qsort(arr,n,sizeof(int),descending);
    printf("Array in Descending Order : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}