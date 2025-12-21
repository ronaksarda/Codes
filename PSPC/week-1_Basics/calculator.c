#include <stdio.h>

int main()

{
    float a,b;
    char OP;
    float sum, Diff, Prod, Div;

       printf("enter your desired operation:\n");
       scanf("%c", &OP);
   
    printf("enter two numbers:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    switch(OP)
    {
        case '+': sum = a+b;
        printf("sum of two numbers is = %f", sum);
        break;

        case '-': Diff = a-b;
        printf("difference of two numbers is = %f", Diff);
        break;

        case '*': Prod = a*b;
        printf("product of two numbers is = %f", Prod);
        break;

        case '/': Div = a/b;
        printf("Division of two numbers is = %f", Div);
        break;

        default: printf("Enter a valid operation!");
        break;
    }

    return 0;
}