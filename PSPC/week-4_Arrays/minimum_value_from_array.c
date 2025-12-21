#include <stdio.h>

int main()

{
    int num[1000] = {}, n, i, min;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    printf("enter the values:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }

    printf("the elements in the array are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n", num[i]);
    }

    for(min = num[0],i=1; i<n; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }

    printf("the minimum value is %d", min);

    return 0;
}