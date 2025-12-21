#include <stdio.h>

void Display(int x[100][100], int n);

int main()
{
    int a[100][100],n,i,j;

    printf("enter size:\n");
    scanf("%d", &n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    Display(a,n);
}

void Display(int x[100][100], int n)
{
    int i,j;

    printf("the elements are:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}
