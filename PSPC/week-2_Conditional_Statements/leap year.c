#include <stdio.h>

int main()

{
    int x;

    printf("enter the year:\n");
    scanf("%d", &x);

    if(x%4 == 0)
    {
        printf("the year is a leap year!");
    }

    else{
        printf("the year is NOT a leap year!");
    }

    return 0;
}