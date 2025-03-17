//Reverse Each String in a 2D Character Array

#include<stdio.h>
#include<string.h>

void revString(char str[100]){
    int i,j;
    char temp;
    int len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void revArray(char arr[][100],int rows){
    for(int i=0;i<rows;i++){
        revString(arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    char arr[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    revArray(arr,n);
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}