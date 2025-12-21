#include <stdio.h>

int main()

{
    int n,i,num[1000] = {},t[1000] = {}, max1,max2,p;

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

    for(max1 = num[0],i=1; i<n; i++)
    {
        if(max1 < num[i])
        {
            max1 = num[i];
            p = i;
        }
    }

    printf("the maximum value is %d\n", max1);

    for(i=0;i<n;i++)
    {
        if(i<p)
        {
            t[i] = num[i];
        }

        if(i>p)
        {
            t[i] = num[i+1];
        }
    }

    for(max2 = t[0],i=1;i<n;i++)
    {
        if(max2 < t[i])
        {
            max2 = t[i];
        }
    }

    printf("2nd maximum is %d", max2);

    

    return 0;
}