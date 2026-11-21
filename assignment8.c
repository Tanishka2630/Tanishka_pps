#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping:");
    printf("\nNumber 1 = %d", num1);
    printf("\nNumber 2 = %d", num2);

    swap(&num1, &num2);

    printf("\n\nAfter swapping:");
    printf("\nNumber 1 = %d", num1);
    printf("\nNumber 2 = %d", num2);

    return 0;
}
