#include<stdio.h>
#include<string.h>

int isAnagram(char str1[],char str2[]){
    int count1[256]={0};
    int count2[256]={0};
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++){
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }
    for(int i=0;i<256;i++){
        if(count1[i]!=count2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[100];
    char str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    if(isAnagram(str1,str2)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}