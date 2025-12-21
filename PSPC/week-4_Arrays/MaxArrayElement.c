#include <stdio.h>

int Max(int x[1000], int n);

int main()
{
    int a[1000],n,i;

    printf("enter the number of elements in the array:\n");
    scanf("%d", &n);

    printf("enter the elements in the array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    Max(a, n);

    return 0;
}

int Max(int x[], int n)
{
    int m, i;

    for(m = x[0],i=1;i<n;i++)
    {
        if(m < x[i])
        {
            m = x[i];
        }
    }

    printf("maximum = %d", m);
}