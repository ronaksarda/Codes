#include <stdio.h>

int main()

{
    int n;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    int i;

    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}