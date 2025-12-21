#include <stdio.h>

int main()

{
    int n, num[1000] = {}, i, sum = 0;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    printf("enter the array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("the elements are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=num[i];
    }

    printf("Sum=%d", sum);

    return 0;
}