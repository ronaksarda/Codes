#include <stdio.h>
#include <windows.h>

int main()

{
    int n;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    int i=1;

    while(i<=n)
    {
        Sleep(1000);
        printf("%d\n", i);
        i++;
    }

    return 0;
}