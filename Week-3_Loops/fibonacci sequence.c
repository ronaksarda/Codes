#include <stdio.h>

int main()

{
    int n,a=0,b=1,c;

    printf("enter n:\n");
    scanf("%d", &n);

    int i;

    for(i=2; i<n; i++)
    {
        c = a + b;
        printf("%d", c);

        a = b;
        b = c;
    }

    return 0;
}