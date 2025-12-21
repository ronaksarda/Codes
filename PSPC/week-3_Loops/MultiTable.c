#include <stdio.h>

int MultiplicationTable(int n);

int main()
{
    int number;

    printf("enter a number:\n");
    scanf("%d", &number);

    int result = MultiplicationTable(number);
}

int MultiplicationTable(int n)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }
}