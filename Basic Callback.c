//basic callback

#include <stdio.h>

double multiply(int a, int b) {
    return (double)a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; 
    }
    return (double)a / b;
}

double calculate(int a, int b, double (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int choice;
    printf("Enter 1 for multiplication and enter 2 for division:\n");
    scanf("%d", &choice);

    int a, b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d", &a, &b);

    double (*op)(int, int) = (choice == 1) ? multiply : divide;

    printf("%.2lf\n", calculate(a, b, op));
    return 0;
}
