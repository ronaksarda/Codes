#include <stdio.h>

int main()

{
    int x;

    printf("Enter a value:\n");
    scanf("%d", &x);

    if(x%2 == 0)
    {
        printf("user input is even!");
    }

    else{
        printf("user input is odd!");
    }

    return 0;
}