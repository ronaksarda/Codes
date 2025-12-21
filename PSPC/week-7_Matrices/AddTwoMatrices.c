#include <stdio.h>

void Sum(int x[100][100], int y[100][100],int n);

int main()
{
    int a[100][100],b[100][100],i,j,n;

    printf("enter size:\n");
    scanf("%d",&n);

    printf("enter elements for matrix 1:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements for matrix 2:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    Sum(a,b,n);
}

void Sum(int x[100][100], int y[100][100],int n)
{
    int i,j,sum[100][100];

    printf("sum of two matrices is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j] += x[i][j] + y[i][j];
        }
    }

    printf("sum of two given matrices is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}