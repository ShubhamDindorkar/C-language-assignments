#include <stdio.h>

int main()
{
    int num, isPrime = 1; // Assume the number is prime initially

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
