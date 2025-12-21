#include <stdio.h>

int square(int n);

int main()
{
    int number;

    printf("enter a number:\n");
    scanf("%d", &number);

    int result = square(number);

    printf("the square of %d is %d", number, result);
}

int square(int n)
{
    return n*n;
}