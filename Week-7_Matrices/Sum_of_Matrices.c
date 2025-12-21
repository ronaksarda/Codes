#include <stdio.h>

int main()

{
    int a[3][3],b[3][3],i,j,c[3][3];

    printf("Enter the values of elements in 1st matrix (ROW_WISE):\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values of elements in 2nd matrix (ROW_WISE):\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("The addition of above two matrices are:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d", c[i][j]);
        }

        printf("\n");
    }

    return 0;



}