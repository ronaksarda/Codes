#include <stdio.h>

int main()

{
    char x;

    printf("enter your desired alphabet!:\n");
    scanf("%c", &x);

    switch(x)
    {
        case 'a':
        printf("its a vowel!\n");
        break;

        case 'e':
        printf("its a vowel!\n");
        break;

        case 'i':
        printf("its a vowel!\n");
        break;

        case 'o':
        printf("its a vowel!\n");
        break;

        case 'u':
        printf("its a vowel!\n");
        break;

        default: printf("its a consonent!\n");
        break;
    }

    return 0;
}