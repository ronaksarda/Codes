#include <stdio.h>

int main()

{
    int n,i,num[1000] = {}, max;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }

    printf("the values in array are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n", num[i]);
    }

    for(max = num[0],i=1; i<n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }

    printf("the maximum value is %d", max);

    return 0;
}