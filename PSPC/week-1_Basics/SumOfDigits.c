#include <stdio.h>

int SumOfDigits(int n);

int main()
{
    int number;

    printf("enter the numebr:\n");
    scanf("%d", &number);

    SumOfDigits(number);
}

int SumOfDigits(int n)
{
    int Sum=0,m;
    int x = n;

    while(n>0)
    {
        m = n%10;
        Sum += m;
        n = n/10;
    }

    printf("the Sum oF Digits Of %d is %d", x,Sum);
}