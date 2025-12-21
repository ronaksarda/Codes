#include <stdio.h>

int main()

{
    char x;

    printf("enter an alphabet:\n");
    scanf("%c", &x);

    if((x>='a' && x<= 'z') || (x>='A' && x<= 'Z')){ 
        if( x == 'a'|| x == 'e'|| x == 'i'|| x == 'o'|| x == 'u' || x == 'A'|| x == 'E'|| x == 'I'|| x == 'O'|| x == 'U')
    {
        printf("the alphabet is a vowel!");
    }

    else{
        printf("the alphabet is a consonent");
    }}

    else{
        printf("This aint an ALPHABET!");
    }

    return 0;
}