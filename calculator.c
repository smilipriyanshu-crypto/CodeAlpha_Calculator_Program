 #include <stdio.h>

int main() {
    int choice;          // Variable to store user choice
    float num1, num2;    // Variables to store two numbers
    float result;        // Variable to store result

    // Display menu to the user
    printf("Basic Arithmetic Operations\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Take operation choice from user
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation using switch case
    switch (choice) {

        case 1:
            // Addition
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            // Subtraction
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            // Multiplication
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            // Division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f", result);
            } else {
                // Handling division by zero
                printf("Error: Division by zero is not allowed");
            }
            break;

        default:
            // If user enters invalid choice
            printf("Invalid choice");
    }

    return 0;   // End of program
}