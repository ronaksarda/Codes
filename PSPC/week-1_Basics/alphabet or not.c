#include <stdio.h>

int main()

{
    char x;

    printf("enter an alphabet:\n");
    scanf("%c", &x);

    if(((x >= 'A') && (x <= 'Z')) || ((x >= 'a') && (x <= 'z')))
    {
        printf("the charecter is an alphabet!");
    }

    else{
        printf("the charecter is NOT an alphabet!");
    }

    return 0;
}