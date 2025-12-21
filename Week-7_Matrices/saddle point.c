#include <stdio.h>

int main()
{
    int i,j,a[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rowmin,colmax;

    for(i=0;i<3;i++)
    {
        rowmin = a[i][0];
        int colIndex = 0;

        for(j=1;j<3;j++)
        {
            if(rowmin > a[i][j])
            {
                rowmin = a[i][j];
                colIndex = j;
            }
        }
    }
}