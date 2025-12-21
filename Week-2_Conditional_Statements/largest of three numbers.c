#include <stdio.h>

int main()

{
    int a,b,c;

    printf("enter the value of a:\n");
    scanf("%d", &a);

    printf("enter the value of b:\n");
    scanf("%d", &b);


    printf("enter the value of c:\n");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("a is the greatest!\n");
    }

    else if( b>a && b>c )
    {
        printf("b is the greatest\n");
    }

    else{
        printf("c is the greatest!\n");
    }

    return 0;

}