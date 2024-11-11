#include <stdio.h>

int main()
{

    float num1, num2, result;
    int choice;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nSelect an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Result: %f + %f = %f\n", num1, num2, result);
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        printf("Result: %f - %f = %f\n", num1, num2, result);
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        printf("Result: %f * %f = %f\n", num1, num2, result);
    }
    else if (choice == 4)
    {

        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %f / %f = %f\n", num1, num2, result);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Please select a valid operation (1-4).\n");
    }

    return 0;
}