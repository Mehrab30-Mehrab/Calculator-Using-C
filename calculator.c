#include <stdio.h>
#include <math.h>

void display_menu() {
    printf("\n=======================\n");
    printf("   MEHRAB'S CALCULATOR\n");
    printf("=======================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");
    printf("=======================\n");
}

int main() {
    int choice, x, y;
    char operator;
    float result;

    while(1) {
        display_menu();
        printf("Choose an operation (1-6): ");
        scanf("%d", &choice);

        if(choice == 6) {
            printf("\nThank you for using Mehrab's Calculator!\n");
            break;
        }

        if(choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("\nEnter first number: ");
        scanf("%d", &x);
        printf("Enter second number: ");
        scanf("%d", &y);

        switch(choice) {
            case 1:
                operator = '+';
                result = x + y;
                break;
            case 2:
                operator = '-';
                result = x - y;
                break;
            case 3:
                operator = '*';
                result = x * y;
                break;
            case 4:
                if(y == 0) {
                    printf("Error: Division by zero is not allowed!\n");
                    continue;
                }
                operator = '/';
                result = (float)x / y; // Float division for more accurate results
                break;
            case 5:
                if(y == 0) {
                    printf("Error: Modulus by zero is not allowed!\n");
                    continue;
                }
                operator = '%';
                result = x % y;
                break;
        }

        printf("\n  %d %c %d = ", x, operator, y);

        if(choice == 4) {
            printf("%.2f\n", result); // Show 2 decimal places for division
        } else {
            printf("%d\n", (int)result);
        }

        printf("=======================\n");
    }

    return 0;
}
