//Function with Parameters, No Return Value

#include<stdio.h>
#include<math.h>

void square(int num){
    printf("The squared value of %d is %d",num,(int)pow(num,2));
    //had to do type-casting because when using power function, it always gives results in double 
}

int main(){
    square(7);
    return 0;
}