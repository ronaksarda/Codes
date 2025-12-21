#include <stdio.h>

void max(int x[], int n);

int main()
{
    int n,i,a[1000];

    printf("enter the size of array:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    max(a,n);
}

void max(int x[], int n)
{
    int m,m2,i,p=0,t[1000];
    int j=0;

    for(m=x[0],i=1;i<n;i++)
    {
        if(m < x[i])
        {
            m = x[i];
            p=i;
        }
    }

    for(i=0;i<n;i++)
    {
        if(i!=p)
        {
            t[j++] = x[i];
        }
    }

    for(m2 = t[0],i=1;i<j;i++)
    {
        if(m2 < t[i])
        {
            m2 = t[i];
        }
    }

    printf("max 1 = %d\n", m);
    printf("max 2 = %d", m2);

}