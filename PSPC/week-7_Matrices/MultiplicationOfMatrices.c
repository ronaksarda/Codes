#include <stdio.h>

void Product(int x[100][100], int y[100][100],int n);

int main()
{
    int a[100][100],b[100][100],n;
    int i,j;

    printf("enter sizes of matrices:\n");
    scanf("%d", &n);

    printf("enter the elements of matrix 1:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the elements of matrix 2:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    Product(a,b,n);
}

void Product(int x[100][100], int y[100][100],int n)
{
    int i,j,k,c[100][100];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(c[i][j]=0,k=0;k<n;k++)
            {
                c[i][j] += x[i][k]*y[k][j];
            }
        }
    }

    printf("the product of the matrices is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}