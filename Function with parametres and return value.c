//Function with parametres and return value

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 7);
    printf("Sum: %d\n", sum);
    return 0;
}
