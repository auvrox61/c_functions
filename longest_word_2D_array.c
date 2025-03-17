#include<stdio.h>
#include<string.h>

int longestW(char words[][50],int rows){
    int longest=0;
    int index=0;
    for(int i=0;i<rows;i++){
        int len=strlen(words[i]);
        if(len>longest){
            longest=len;
            index=i;
        }
    }
    return index;
}

int main(){
    int n;
    scanf("%d",&n);
    char words[n][50];
    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
    int result=longestW(words,n);
    printf("The longest word is at the #%d index of the array\n",result);
    return 0;
}