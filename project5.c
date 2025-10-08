#include <stdio.h>
int main() {
    float num2, num4, result;
    char operation;
    printf("Enter first number: ");
    scanf("%f", &num2);
    printf("Enter second number: ");
    scanf("%f", &num4);
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);  
    if (operation == '+') {
        result = num2 + num4;
        printf("Result = %.4f\n", result);
    }
    else if (operation == '-') {
        result = num2 - num4;
        printf("Result = %.2f\n", result);
    }
    else if (operation == '*') {
        result = num2 * num4;
        printf("Result = %.4f\n", result);
    }
    else if (operation == '/') {
        if (num4 != 0) {
            result = num2 / num4;
            printf("Result = %.2f\n", result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operation! Please choose +, -, *, or /.\n");
    }

    return 0;
}

