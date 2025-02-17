//Passing pointers to a function

#include<stdio.h>

void printString(char str[]){
    printf("%s",str);
}

int main(){
    char name[]="Khandaker Musabbir Ashad";
    printString(name);
    return 0;
}