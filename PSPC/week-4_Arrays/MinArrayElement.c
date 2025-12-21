#include <stdio.h>

int Min(int x[], int n);

int main()
{
    int a[1000], n, i;

    printf("enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    Min(a,n);

    return 0;
}

int Min(int x[], int n)
{
    int i,m;

    for(m = x[0],i=1;i<n;i++)
    {
        if(m > x[i])
        {
            m = x[i];
        }
    }

    printf("minimum = %d", m);
}