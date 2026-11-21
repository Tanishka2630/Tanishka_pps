#include <stdio.h>

long long factorialRec(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorialRec(n - 1);
}

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Invalid number");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial without recursion = %lld\n", fact);
    printf("Factorial using recursion = %lld", factorialRec(n));

    return 0;
}
