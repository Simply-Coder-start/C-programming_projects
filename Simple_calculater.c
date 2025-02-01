#include <stdio.h> 
#include <math.h>

void printmenu() {
    printf("\n-----------------------------\n");
    printf("\n\n Welcome to The Calculator\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Division");
    printf("\n3. Multiplication");
    printf("\n4. Subtraction");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. EXIT");
    printf("\n Enter your choice: \n");
}

int main() {
    int choice;
    float a, b, result;

    while (1) {
        printmenu();
        scanf("%d", &choice);

        if (choice == 7) {
            printf("\n\tthank you for playing\n");
            
            break;
        }

        if (choice < 1 || choice > 7) {
            fprintf(stderr, "Invalid choice! Please enter a number between 1-7.\n");
            continue;
        }
        printf("\n");
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);

        switch (choice) {
            case 1:
                result = a + b;
                printf("Answer: %.2f\n", result);
                break;
            case 2:
                if (b != 0) {
                    result = a / b;
                    printf("Answer: %.2f\n", result);
                } else {
                    fprintf(stderr, "Error: Division by zero is not allowed!\n");
                }
                break;
            case 3:
                result = a * b;
                printf("Answer: %.2f\n", result);
                break;
            case 4:
                result = a - b;
                printf("Answer: %.2f\n", result);
                break;
            case 5:
                if ((int)b != 0) {
                    printf("Answer: %d\n", (int)a % (int)b);
                } else {
                    fprintf(stderr, "Error: Modulus by zero is not allowed!\n");
                }
                break;
            case 6:
                result = pow(a, b);
                printf("Answer: %.2f\n", result);
                break;
        }
    }

    return 0;
}
