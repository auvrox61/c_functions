//Write a program in C program to convert a string to uppercase or lowercase

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void uppercase(char *str){
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
    }
}

void lowercase(char *str){
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
    }
}

int main(){
    char str[100];
    printf("Enter the string : \n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int choice;
    printf("Press 1 for uppercasing and 2 for lowercasing\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        uppercase(str);
        printf("Uppercased string : %s\n",str);
        break;
        case 2:
        lowercase(str);
        printf("Lowercased string : %s\n",str);
        break;
        default:
        printf("Invalid Choice!\n");
        return 1;
    }
    return 0;
}