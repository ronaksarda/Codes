#include <stdio.h>

int CheckPrime(int n);

int main()
{
    int number;

    printf("enter a number:\n");
    scanf("%d", &number);

    CheckPrime(number);
}

int CheckPrime(int n)
{
    int i,count=0;

    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("%d is a prime number!", n);
    }

    else{
        printf("%d is NOT a prime number!", n);
    }
}