#include <stdio.h>

int main()
{
    int n,i;
    float sum = 0;

    printf("enter the number:\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum = sum + 1.0/i;
    }

    printf("the sum of series (1 + 1/2 + 1/3 + ... + 1/%d) is %.3f", n, sum);

    return 0;
}