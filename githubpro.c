#include <stdio.h>
#include <stdlib.h>


float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

float power(float base, int exp)
{
    float result = 1;
    int i = 0;
    while (i < exp)
    {
        result *= base;
        i++;
    }
    return result;
}

int factorial(int n)
{
    int result = 1, i = 1;
    while (i <= n)
    {
        result *= i;
        i++;
    }
    return result;
}

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n--- Calculator Menu ---\n");
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Power\n6. Factorial\n0. Exit\n\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the 1st number: ");
            scanf("%f", &a);
            printf("Enter the 2nd number:");
            scanf("%f", &b);
            printf("Result: %.2f\n", add(a, b));
            break;
        case 2:
            printf("Enter the 1st number: ");
            scanf("%f", &a);
            printf("Enter the 2nd number:");
            scanf("%f", &b);
            printf("Result: %.2f\n", subtract(a, b));
            break;
        case 3:
            printf("Enter the 1st number: ");
            scanf("%f", &a);
            printf("Enter the 2nd number:");
            scanf("%f", &b);
            printf("Result: %.2f\n", multiply(a, b));
            break;
        case 4:
            printf("Enter the 1st number: ");
            scanf("%f", &a);
            printf("Enter the 2nd number:");
            scanf("%f", &b);
            printf("Result: %.2f\n", divide(a, b));
            break;
        case 5:
            printf("Enter the base: ");
            scanf("%f", &a);
            printf("Enter the exponent:");
            scanf("%d",(int*)&b);
            printf("Result: %.2f\n", power(a, (int)b));
            break;
        case 6:
            printf("Enter an integer: ");
            scanf("%d", (int*)&a);
            printf("Result: %d\n", factorial((int)a));
            break;
        case 0:
            printf("Exiting calculator....Thank you!!\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    while (choice != 0);

    return 0;
}
