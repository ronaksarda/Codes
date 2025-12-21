#include <stdio.h>

int main()

{
    int n,fact=1;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    int i;

    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    printf("the factorial of the first %d numbers is = %d", n,fact);

    return 0;

}