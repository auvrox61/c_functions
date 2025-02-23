//sorting an array using callback function

#include<stdio.h>
#include<stdlib.h>

int compareInts(const void *a,const void *b){
    const int *intPointerA=(const int*)a;
    const int *intPointerB=(const int*)b;
    int intA=*intPointerA;
    int intB=*intPointerB;
    return intA-intB;
}

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    qsort(array,n,sizeof(int),compareInts);
    printf("Sorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}