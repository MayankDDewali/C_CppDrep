/* Pz6- C Program to Compute Quotient and Remainder*/
#include <stdio.h>

int main()
{
    float dividend, divisor, quotient, remainder;

    // Get user input
    printf("Enter dividend: ");
    scanf("%f", &dividend);

    printf("Enter divisor: ");
    scanf("%f", &divisor);

    // Check if the divisor is not zero
    if (divisor != 0)
    {
        // Computes quotient
        quotient = dividend / divisor;

        // Computes remainder without fmod
        remainder = dividend - quotient * divisor;

        // Display results
        printf("Quotient = %f\n", quotient);
        printf("Remainder = %f\n", remainder);
    }
    else
    {
        // Handle division by zero
        printf("Error: Division by zero is undefined.\n");
    }

    return 0;
}