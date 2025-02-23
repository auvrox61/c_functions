//Write a C program to check if a string (case-sensitive) is a palindrome or not using a callback function.
//w3r_callbackFunctions_4

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int len;
    int isPalindrome=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    len=strlen(str);
    printf("Entered Word : %s\n",str);
    for(int i=0;i<len/2;i++){
        if(str[i]==str[len-i-1]){
            isPalindrome=1;
            break;
        } else{
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome==1){
        printf("Palindrome word\n");
    } else if(isPalindrome==0){
        printf("Non-Palindrome word");
    }
    return 0;
}