/* Pz18 C Program to Find Factorial of a Number*/

#include <stdio.h>

// Making a function for factorial
long long fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative number.\n");
        // For running the function again
        main();
    }
    else
    {
        printf("Factorial of %d is %lld.", num, fact(num));
    }
    return 0;
}