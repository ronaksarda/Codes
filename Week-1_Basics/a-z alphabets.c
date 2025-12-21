#include <stdio.h>

int main()

{
    char x;

    for(x='a'; x<='z'; x++)
    {
        if((x>='a' && x<='z') || (x>='A' && x<='Z'))
        {
            printf("%c\n", x);
        }
    }

    return 0;
}