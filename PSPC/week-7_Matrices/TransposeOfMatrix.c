#include <stdio.h>

void Transpose(int x[100][100], int n)
{
    int i,j;
    int t[100][100];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[i][j] = x[j][i];
        }
    }

    printf("the transpose of matrix is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[100][100],i,j,n;

    printf("enter size of matrix:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", & a[i][j]);
        }
        printf("\n");
    }

    Transpose(a,n);
}