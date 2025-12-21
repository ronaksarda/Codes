#include <stdio.h>

void min(int x[], int n);

int main()
{
    int n,i,a[1000];

    printf("enter size:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    min(a,n);
}

void min(int x[], int n)
{
    int i,p=0,m,m2,t[1000];
    int j=0;

    m = x[0];
    for(i=1;i<n;i++)
    {
        if(m > x[i])
        {
            m = x[i];
            p = i;
        }
    }

    for(i=0;i<n;i++)
    {
        if(i!=p)
        {
            t[j++] = x[i];
        }
    }

    m2 = t[0];
    for(i=1;i<j;i++)
    {
        if(m2 > t[i])
        {
            m2 = t[i];
        }
    }

    printf("min 1 = %d\n", m);
    printf("min 2 = %d", m2);
}