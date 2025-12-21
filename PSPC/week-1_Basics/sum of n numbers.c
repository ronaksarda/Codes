#include <stdio.h>

int main()

{
    int n, sum=0;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    int i;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    printf("\nSUM of first %d numbers = %d", n,sum);

    return 0;
}