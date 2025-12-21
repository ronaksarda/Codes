#include <stdio.h>

int main()

{
    char x;

    printf("enter an alphabet:\n");
    scanf("%c", &x);

    if((x>='a')&&(x<='z'))
    {
        printf("the alphabet is in lowercase!");
    }

    else if((x>='A')&&(x<='Z'))
    {
        printf("the alphabet is in UPPERCASE!");
    }

    else{
        printf("The charecter is NOT an alphabet");
    }

    return 0;
}