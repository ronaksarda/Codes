#include <stdio.h>

int main()

{
    int x;

    printf("enter the value:\n");
    scanf("%d", &x);

    if(x>0)
    {
        printf("user input is postive!");
    }

    else if(x==0)
    {
        printf("user input is neither portive nor negative!");
    }

    else{
        printf("user input is negative!");
    }

    return 0;
}