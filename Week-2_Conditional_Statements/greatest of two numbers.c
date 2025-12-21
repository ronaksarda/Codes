#include <stdio.h>

int main()

{
    int a,b;

    printf("enter the value of a:\n");
    scanf("%d", &a);

    printf("enter the value of b:\n");
    scanf("%d", &b);

    if(a>b)
    {
        printf("a is greater!");
    }

    else{
        printf("b is greater!");
    }

    return 0;
}