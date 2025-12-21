#include <stdio.h>

int Trace(int x[100][100], int n);

int main()
{
    int a[100][100], n,i,j;

    printf("enter size of matrice:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    Trace(a,n);
}

int Trace(int x[100][100], int n)
{
    int i,j,T;

    for(T=0,i=0;i<n;i++)
    {
        T += x[i][i];
    }

    printf("trace = %d", T);
}