#include <stdio.h>

int main()

{
    int n;

    printf("enter a value:\n");
    scanf("%d", &n);

    int i;

    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }

    return 0;
}